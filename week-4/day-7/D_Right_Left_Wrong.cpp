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

        vector<int> a(n);
        string s;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cin >> s;
        vector<int> ps(n);
        ps[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            ps[i] = ps[i - 1] + a[i];
        }
        int l = 0, r = n - 1, total = 0;

        while (l < r)
        {
            while (l < n && s[l] != 'L')
                l++;
            if (l == n)
                break;
            while (r >= 0 && s[r] != 'R')
                r--;
            if (r == -1)
                break;

            if (r <= l)
                break;

            total += (l > 0 ? ps[r] - ps[l - 1] : ps[r]);
            l++, r--;
        }

        cout << total << endl;
    }

    return 0;
}
