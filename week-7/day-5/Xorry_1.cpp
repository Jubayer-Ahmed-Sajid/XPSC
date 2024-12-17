#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a =0,b=0;
        int setBit = 0;
        while((1<<setBit)<=n){
            setBit++;
        }
        a=1<<(setBit-1);
        b = a^n;
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}
