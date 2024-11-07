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
        deque<int> v;

        for (int i = 1; i <= n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        int min = 1;
        int mx = n;
        int l = 1;
        int r = n;

        bool f = false;
        while (!v.empty())
        {
            if (v.front() == min)
            {
                v.pop_front();
                min++;
                l++;
            }
            else if (v.front() == mx)
            {
                v.pop_front();
                l++;
                mx--;
            }
            else if (v.back() == min)
            {
                v.pop_back();
                min++;
                r--;
            }
            else if (v.back() == mx)
            {
                v.pop_back();
                r--;
                mx--;
            }
            else
            {
                f = true;
                break;
            }
        }

        if (min >= mx)
            cout << -1 << endl;
        else
            cout << l << " " << r << endl;
    }
    return 0;
}