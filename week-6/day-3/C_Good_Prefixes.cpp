#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            {
                cin>>v[i];
            }
        int mx=INT_MIN;
        long long sum = 0;
        int cnt =0;
        for (int i = 0; i < n; i++)
            {
                sum+=v[i];
                mx = max(mx,v[i]);
                if(sum-mx == mx) cnt++;
            }
        cout<<cnt<<endl;
    }
    return 0;
}
