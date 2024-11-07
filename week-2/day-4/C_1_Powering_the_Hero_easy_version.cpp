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
        multiset<int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long mx = 0;
        for (int x : v)
        {
            if (x == 0)
            {
                if (!b.empty())
                {
                    mx += *(b.rbegin());
                    b.erase(--(b.end()));
                }
            }
            else if (x != 0)
            {
                b.insert(x);
            }
        }
        cout << mx << endl;
    }
    return 0;
}