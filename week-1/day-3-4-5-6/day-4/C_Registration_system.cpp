#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    map<string, int> mp;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s] = 0;
            cout << "OK" << endl;
        }
        else
        {
            int count = ++mp[s];
            string newS = s + to_string(count);
            while (mp.find(newS) != mp.end())
            {
                count++;
                string newS = s + to_string(count);
            }
            mp[newS] = 0;
            mp[s] = count;
            cout << newS << endl;
        }
    }

    return 0;
}