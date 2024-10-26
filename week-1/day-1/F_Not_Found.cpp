#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char m = NULL;
    bool vis[128];
    memset(vis, false, sizeof(vis));
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {

            vis[c] = true;
        }
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (vis[i] == false)
        {
            m = i;
            break;
        }
    }
    if (m >= 'a' && m <= 'z')
    {
        cout << m;
    }
    else
    {
        cout << "None";
    }
    return 0;
}