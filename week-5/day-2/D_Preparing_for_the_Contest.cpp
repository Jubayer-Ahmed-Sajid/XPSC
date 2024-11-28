#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int lower = n - (k+1);
        int temp = n;
        for (int i = 0; i < lower; i++)
            {
                v[i] = temp;
                temp--;
            }
        v[lower] = 1;
        int l = 2;
        for (int i = lower+1; i < n; i++)
            {
                v[i] = l;
                l++;
            }
        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}