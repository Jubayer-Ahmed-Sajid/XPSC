#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> f(n);
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int l = 0, r = 0;
        long long sum = 0;
        int remainder = 0;
        int ans = 0;
        while (r < n)
        {
            sum += f[r];
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                sum = f[r];
                l = r;
            }

            while (sum > k)
            {
                sum -= f[l];
                l++;
            }

            ans = max(ans, r - l + 1);

            r++;
           
        }
        cout << ans << endl;
    }
    return 0;
}