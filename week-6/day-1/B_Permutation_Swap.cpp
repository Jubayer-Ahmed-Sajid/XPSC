#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
            {
                cin>>v[i];
            }
        int k =0;
        for (int i = 1; i <= n; i++)
            {
                k = __gcd(k,abs(v[i]-i));
            }
            cout<<k<<endl;
    }
    return 0;
}
