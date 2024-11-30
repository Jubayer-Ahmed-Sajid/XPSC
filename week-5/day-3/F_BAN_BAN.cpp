#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num = n*3;
        int swap = 0;
        vector<pair<int,int>> v;
        int l=2,r=num;
        while(l<r){
            v.push_back({l,r});
            swap++;
            l+=3;
            r-=3;
        }
        cout<<swap<<endl;
        for(auto [x,y]: v){
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
