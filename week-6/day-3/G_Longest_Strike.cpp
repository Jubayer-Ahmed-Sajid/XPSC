#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        map<long long, long long> mp;
        long long temp;
        long long l = -1, count = 0, mx = 0, last = -1;
        for (long long i = 0; i < n; i++)
        {
            cin >> temp;
            mp[temp]++;
        }
        for (auto x : mp)
        {
            if (x.second >= k)
            {
                if (count == 0)
                {
                    l = x.first;
                    count++;
                }
                else
                {
                    if (l + count == x.first)
                    {
                        count++;
                    }
                    else
                    {
                        if (count > mx)
                        {
                            mx = count;
                            last = l;
                        }
                        count = 1;
                        l = x.first;
                    }
                }
            }
            else
            {
                if (count > mx)
                {
                    mx = count;
                    last = l;
                }
            }
        }
        if (count > mx)
        {
            mx = count;
            last = l;
        }
        if (last == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << last << " " << last + mx - 1 << endl;
        }
    }
    return 0;
}
