#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int rem = n-m;
        if(n<m) cout<<"No"<<endl;
        else {
            if(rem%2==0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
            
    }
    return 0;
}
