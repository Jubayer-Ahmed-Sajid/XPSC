#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    int serial =1;
    vector<int> ans;
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            int money;
            cin >> money;
            s.insert({serial, money});
            ms.insert({money, -serial});
            serial++;
        }
       else if (opt == 2)
        {
            int pos = s.begin()->first;
            int money =s.begin()->second;
            s.erase(s.begin());
            ms.erase({money,-pos});
            ans.push_back(pos);
        }
        else
        {
            int pos = -ms.rbegin()->second;
            int money = ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos,money});            
        }
    }
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}