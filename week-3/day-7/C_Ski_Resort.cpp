#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
     int n,m,q;
    cin>>n>>m>>q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
    long long cnt =0, mx =0, ans = 0;
    for(int i =0;i<n;i++){
        if(max(mx,v[i])<=q){
            cnt++;
            mx =max(mx,v[i]);
        }
        else {
            if(cnt >= m){
                long long temp1 = cnt -m+1;
                long long temp2 = (temp1*(temp1+1))/2;
                ans+=temp2;
            }
            cnt = 0;
            mx = 0;
            if(v[i]<=q){
                mx = v[i];
                cnt = 1;
            }
        }
    }
    if(cnt>=m){
        long long temp1= cnt -m+1;
        long long temp2 = (temp1*(temp1+1))/2;
        ans+=temp2;
    }
    cout<<ans<<endl;
   }
    return 0;
}