#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin>>a>>b>>c;
    int circles = floor((c+0.5)/a);
    cout<<circles*b<<endl;

    return 0;
}