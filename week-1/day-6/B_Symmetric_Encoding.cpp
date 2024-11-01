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
        map<char, int> chars;
        vector<char> sorted;
        for (int l = 0; l < n; l++)
        {
            if (chars[s[l]] == 0)
            {
                chars[s[l]] = 1;
                sorted.push_back(s[l]);
            }
        }
        sort(sorted.begin(), sorted.end());
        map<char, char> characters;
        int i = 0;
        int j = sorted.size() - 1;
        while (j >=0)
        {
            characters[sorted[i]] = sorted[j];
            i++;
            j--;
        }
        for (int k = 0; k < n; k++)
        {
            cout<<characters[s[k]];
        }
        cout << endl;
    }
    return 0;
}