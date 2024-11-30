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
        string s;
        cin >> s;
        n = s.size();
        bool flag = false;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                continue;
            if (s[i] > s[n - i - 1])
            {
                flag = true;
            }
            else
                break;
        }
        string rev = s;
        if (flag==0)
            cout << s << endl;
        else
        {
            reverse(rev.begin(), rev.end());
            cout << rev<<s << endl;
        }
    }
    return 0;
}
