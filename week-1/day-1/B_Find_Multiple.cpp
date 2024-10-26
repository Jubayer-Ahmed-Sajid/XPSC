#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    if(b>=c){

    int multiple = floor(b/c);
    if(multiple*c >=a && multiple*c <= b) cout<<multiple*c<<endl;

    else cout<<-1<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}