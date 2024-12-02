#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            {
                cin>>v[i];
            }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        map<int,int> frq;
        for (int i = 0; i < n; i++)
            {
                frq[v[i]]++;
            }
        int mx_oc = 0;
        int ans = 0;
        for(auto [x,y]: frq){
            mx_oc = max(mx_oc,y);
        }
        while(mx_oc < n){
            int to_swap = n-mx_oc;
            int can_swap = mx_oc;
            ans++;
            ans+=min(to_swap,can_swap);
            mx_oc+=min(to_swap,can_swap);

        }
        cout<<ans<<endl;
    }
    return 0;
}
