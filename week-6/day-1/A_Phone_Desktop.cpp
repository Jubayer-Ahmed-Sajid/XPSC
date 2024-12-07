#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int total = x+(y*4);
        
        int ans = max((ceil(total/15.00)),(ceil((y*4)/8.00)));
        cout<<ans<<endl;
        
    }
    return 0;
}
