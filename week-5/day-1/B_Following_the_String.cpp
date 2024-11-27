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
        vector<int> v(n);
 
        string s = "abcdefghijklmnopqrstuvwxyz";
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = 0;
        }
               for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto [x, y] : mp)
            {
                if (y == v[i])
                {
                    cout << x;
                    mp[x]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}