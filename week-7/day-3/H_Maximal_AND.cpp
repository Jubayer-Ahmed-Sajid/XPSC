#include <bits/stdc++.h>
using namespace std;
const int B = 30;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> v(B + 1);

        for (int i = 0; i < n; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if ((a[i] >> k) & 1)
                {
                    v[k]++;
                }
            }
        }
        int ans = 0;
        for (int k = B; k >= 0; k--)
        {
            if (v[k] == n)
            {
                ans += (1 << k);
            }
            else
            {
                int need = n - v[k];
                if (s >= need)
                {
                    ans += (1 << k);
                    s -= need;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
