#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
            {
                cin>>v[i];
            }
        long long ans =b;
        for (int i = 0; i < n; i++)
            {
                if(v[i]>= a-1){
                    ans+= a-1;
                }
                else ans += v[i];
            }
        
        cout<<ans<<endl;
    }
    return 0;
}