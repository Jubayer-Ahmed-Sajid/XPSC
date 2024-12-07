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
        vector<int> v(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (is_sorted(v.begin(), v.end()))
            cout << "YES" << endl;
        else
        {
            bool possible = false;
            for (int i = 0; i < n; i++)
            {
                int x = v[0];
                v.push_back(x);
                v.erase(v.begin());
                if (is_sorted(v.begin(), v.end()))
                {
                    possible = true;
                    break;
                }
            }
            if(possible) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
