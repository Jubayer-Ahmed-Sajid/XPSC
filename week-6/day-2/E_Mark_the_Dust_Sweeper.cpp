#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n);
        int firstPos = -1;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (firstPos == -1 && v[i] > 0)
            {
                firstPos = i;
            }
        }
        if (firstPos == (-1) || firstPos == n - 1)
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = firstPos; i < n - 1 && i >= 0; i++)
        {
            ans += v[i];
            if (v[i] == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
