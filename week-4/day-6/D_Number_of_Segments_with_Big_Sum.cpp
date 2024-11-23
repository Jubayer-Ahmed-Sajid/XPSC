#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
    
    int l =0,r =0;
    int ans=INT_MAX;
    long long numbers =0;
    long long sum =0;
    while(r<n){
        sum+= v[r];
        while(sum>=k){
            numbers += (n-r);
            sum-=v[l];
            l++;
        }
        r++;


    }
     cout<<numbers<<endl;
    return 0;
}