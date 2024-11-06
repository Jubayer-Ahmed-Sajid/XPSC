#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        map<int,set<int>> mp;
        for (int i = 0; i < n; i++)
            {
                int num;
                cin>>num;
                mp[num].insert(i);
            }
        while(q--){
            int a,b;
            cin>>a>>b;
            if((mp.find(a) ==mp.end()) || (mp.find(b)==mp.end())){
                cout<<"NO"<<endl;
            }
            else{
                int starting = *mp[a].begin();
                int ending = *mp[b].rbegin();
                if(starting < ending) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}