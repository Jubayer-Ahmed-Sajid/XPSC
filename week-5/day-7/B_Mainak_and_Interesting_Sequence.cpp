#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n > m)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> v(n);
        if (n % 2 == 0 && m % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (i < (n - 2))
                {
                    v[i] = 1;
                }
                else
                {
                    v[i] = ((m - (n - 2)) / 2);
                }
            }
        }
        else if ((n % 2 == 1 && m % 2 == 0) || (n % 2 == 1 && m % 2 == 1))
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                if (i < n - 1)
                {
                    v[i] = 1;
                }
                else
                    v[i] = m - (n - 1);
            }
        }
        else if (n % 2 == 0 && m % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
