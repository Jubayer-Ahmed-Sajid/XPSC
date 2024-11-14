#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
    
        int ans = INT_MAX;
        int todo = 0,r=0,l=0;
        while(r<n){
            if(s[r] =='W'){
                todo++;
            }
            if(r-l+1 ==k){
                ans = min (ans,todo);
                if(s[l] =='W') todo--;
                l++;
                r++;
            }
            else r++;
        }
        cout<<ans<<endl;
    }
    return 0;
}