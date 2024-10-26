#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    int sum = 0;
    if(a >= b){
        sum = sum+a;
        a--;

    }
    else if(b > a){
        sum = sum +b;
        b--;
    }
    if(a >= b){
        sum = sum+a;
        a--;

    }
    else if(b > a){
        sum = sum +b;
        b--;
    }
    cout<<sum<<endl;
    return 0;
}