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
        string s;
        cin >> s;
        int first = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
            {
                first = i;
                break;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B')
            {
                last = i;
            }
        }
        int length = last - first + 1;
        cout << length << endl;
    }
    return 0;
}