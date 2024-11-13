#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
    for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
    int l =0;
    int r= 0;
    long long ans = 0;
    while(l<n && r< m){
        int curr= a[l];
        int cnt1 = 0;
        int cnt2 = 0;
        while(l<n && a[l] == curr){
            cnt1++;
            l++;
        }
        while(r < m && curr>b[r]){
            r++;
        }
        while(r<m && b[r] == curr){
            cnt2++;
            r++;
        }
        ans+=(1LL*cnt1*cnt2);
        
    }
    cout<<ans<<endl;
    return 0;
}