#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> c;
    for (int i = 0; i < n; i++)
        {
            int num;
            cin>>num;
            c.insert(num);
        }
        int cnt=0;
        for (int i = 1; i <= n; i++)
            {
                auto it = c.lower_bound(i);
                if(it != c.end()){
                    cnt++;
                    c.erase(it);
                }
                else break;
            }

    cout << cnt << endl;
    return 0;
}