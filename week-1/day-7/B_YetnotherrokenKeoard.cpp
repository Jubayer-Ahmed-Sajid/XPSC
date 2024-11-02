#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        vector<char> ch;
        stack<int> lower;
        stack<int> upper;

        for (char c : s)
        {
            if (c != 'b' && c != 'B')
            {

                ch.push_back(c);

                if (islower(c))
                {
                    lower.push(ch.size() - 1);
                }
                else if (isupper(c))
                {
                    upper.push(ch.size() - 1);
                }
            }
            else if (c == 'b' && !lower.empty())
            {

                ch[lower.top()] = '0';
                lower.pop();
            }
            else if (c == 'B' && !upper.empty())
            {

                ch[upper.top()] = '0';
                upper.pop();
            }
        }

        for (char x : ch)
        {
            if (x != '0')
            {
                cout << x;
            }
        }
        cout << endl;
    }

    return 0;
}
