#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,x=0;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            {
                cin>>v[i];
                x^=v[i];
                
            }
            int ans = x;
        for (int i = 0; i < n; i++)
            {
                int current_x = x^v[i];
                ans = min(ans,current_x);
                
            }
        cout<<ans<<endl;
    }
    return 0;
}
