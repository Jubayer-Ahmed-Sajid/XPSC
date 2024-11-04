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
        int cell;
        cin >> cell;
        vector<char> cl;
        vector<char> cl2;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < cell; j++)
            {
                char c;
                cin >> c;
                if (i == 0)
                {
                    if (c != 'R')
                        cl.push_back('B');
                    else
                        cl.push_back(c);
                }
                else if (i == 1)
                {
                    if (c != 'R')
                        cl2.push_back('B');
                    else
                        cl2.push_back(c);
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < cell; i++)
        {
            if (cl[i] != cl2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}