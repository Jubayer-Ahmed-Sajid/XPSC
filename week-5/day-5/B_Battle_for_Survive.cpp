#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        long long sum =0;
        for (int i = 0; i < n; i++)
            {
                int num;
                cin>>num;
                v[i]=num;
                sum+=num;
            }
        cout<<sum - 2*(v[n-2])<<endl;
    }
    return 0;
}
