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
        bool arr[n];
        int items[n];
        for (int i = 1; i <= n; i++)
            {
                cin>>arr[i];
            }
        for (int i = 1; i <= n; i++)
            {
                items[i] = i;
            }
        int last_bought = 0;
        for (int i = 1; i <= n; i++)
            {
                if(arr[i]==1)  last_bought = i;
            }
        long long ans = 1;
        for (int i = last_bought-1; i >0; i--)
            {
                if(arr[i] ==1){
                    ans= ans+2;
                }
                if(arr[i] ==0){
                    ans++;
                }
            }
        cout<<ans<<endl;
    }
    return 0;
}