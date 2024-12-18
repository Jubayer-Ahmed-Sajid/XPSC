#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int setBit = 0;
        while((1<<setBit) <=n){
            setBit++;
        }
        cout<<(1<<setBit-1)-1<<endl;
    }
    return 0;
}