#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<pair<string, string>,bool> s;

    for (int i = 0; i < t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
       s[{s1,s2}] = true;
    }
   
    cout<<s.size();

    return 0;
}