#include <bits/stdc++.h>
using namespace std;

int main()
{

   int t;
    cin >> t;
    while (t--)
    {
       long long n;
        cin >> n;
       vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 30; i >= 0; i--)
        {
           long long cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] >= (1LL << i) and a[j] < (1LL << i + 1))
                    cnt++;
            }
            ans += (cnt * (cnt - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
