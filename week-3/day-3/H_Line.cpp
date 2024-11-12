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
        int n;
        cin >> n;
        vector<long long> v;
        string s;
        cin >> s;
        long long sum = 0;
        int minChange = 0;
        for (int i = 0; i < n; i++)
        {
            long long L = i;
            long long R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    minChange++;
                    sum += R;
                    v.push_back(R - L);
                }
                else
                {
                    sum += L;
                }
            }
          else  if (s[i] == 'R')
            {
                if (L > R)
                {
                    minChange++;
                    sum += L;
                    v.push_back(L - R);
                }
                else
                {
                    sum += R;
                }
            }
        }
        vector<long long> ans(n + 1);
        for (int i = minChange; i <= n; i++)
        {
            ans[i] = sum;
        }
        sort(v.begin(), v.end(), greater<long long>());
       
        for (int i = minChange-1; i >=1; i--)
        {
            sum -= v.back();
            v.pop_back();
            ans[i] = sum;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}