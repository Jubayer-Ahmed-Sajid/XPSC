#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int remaining = 4 - (x+y+z);
    if((x+y/2+remaining)>(z+y/2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}