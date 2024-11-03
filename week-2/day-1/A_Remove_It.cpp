#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num != x)
        {
            v.push_back(num);
        }
    }
    for (auto y : v)
    {
        cout << y << " ";
    }
    return 0;
}