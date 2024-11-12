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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        reverse(v.begin(), v.end());
        map<int, int> mp;
        int toRemove = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] != true)
                mp[v[i]] = true;
            else
            {
                toRemove = n - i;
               break;
            }
        }
        cout << toRemove << endl;
    }
    return 0;
}