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
        vector<int> v;
        int x = 1, y = n * n;

        for (int i = 1; i <= n * n; i++)
        {
            if (i % 2 == 0)
            {
                v.push_back(x);
                x++;
            }
            else
            {
                v.push_back(y);
                y--;
            }
        }

        int idx = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {

                for (int j = 0; j < n; j++)
                {
                    cout << v[idx + j] << " ";
                }
            }
            else
            {

                for (int j = n - 1; j >= 0; j--)
                {
                    cout << v[idx + j] << " ";
                }
            }
            cout << endl;
            idx += n;
        }
    }
    return 0;
}
