#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1) cout<<1<<endl;
        else if(a-1 <( abs(b-c) + (c-1))) cout<<1<<endl;
        else if(a-1 == ( abs(b-c) + (c-1))) cout<<3<<endl;
        else if(a-1 >( abs(b-c) + (c-1))) cout<<2<<endl;
    }
    return 0;
}