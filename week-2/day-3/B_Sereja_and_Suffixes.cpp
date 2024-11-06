#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;

    vector<int> ml(n+1);
    
    for (int i = 1; i <= n; i++)
        {
            cin>>ml[i];
        }
    set<int> s;
    vector<int> cnt(n+1);
    for(int i =n;i>=1;i--){
        s.insert(ml[i]);
        cnt[i] = s.size();

    }
    for(int i=1;i<=m;i++){
        int idx ;
        cin>>idx;
        cout<<cnt[idx]<<endl;
    }
    return 0;
}