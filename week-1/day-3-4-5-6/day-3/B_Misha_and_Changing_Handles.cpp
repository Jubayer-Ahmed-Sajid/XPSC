#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> old_new, newHandle;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (newHandle.find(a) != newHandle.end())
        {
            string s = newHandle[a];
            old_new[s] = b;
            newHandle.erase(a);
            newHandle[b] = s;
        }
        else
        {
            old_new[a] = b;
            newHandle[b] = a;
        }
    }

    cout << old_new.size() << endl;
    for (auto [x, y] : old_new)
    {
        cout << x << " " << y << endl;
    }

    return 0;
}