#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        string s;
        cin >> s;
        bool inserted = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s[i] <= 'y')
                {
                    s.insert(i+1,"z");
                    inserted = true;
                    break;
                }
                else
                {
                    s.insert(i+1, "x");
                    inserted = true;
                    break;
                }
            }
        }
        if (!inserted)
        {
            if (s[0] <= 'y')
            {
                s.insert(0, "z");
            }
            else
                s.insert(0, "x");
        }
        cout << s << endl;
    }
    return 0;
}