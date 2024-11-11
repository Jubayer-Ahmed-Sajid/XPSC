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
        long long int arr[n];
       map<int,int>mp;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            if(arr[i] !=0){
               mp[arr[i]++];
            }
        }
        if(mp.size()==1 ||mp.size()==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}