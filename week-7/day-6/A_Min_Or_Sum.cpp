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
        long long sum =0;
        for (int i = 0; i < n; i++)
            {
                sum = sum|v[i];
            }
        cout<<sum<<endl;
    }
    return 0;
}
