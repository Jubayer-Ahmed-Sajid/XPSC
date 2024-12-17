#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int len = s.size();
    int ans = 0;
    ans = (1 << len) - 2;
    
    for (int i = len - 1, pos = 0;i >= 0; i--, pos++)
    {

        if (s[i] == '7')
        {
            ans += (1 << pos);
        }
    }
    cout << ans + 1 << endl;
    return 0;
}