#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
            {
                cin>>v[i];
            }
        int mx=0;
        int min=INT_MAX;
        for (int i = 0; i < n; i++)
            {
                mx|=v[i];
                min&=v[i];
            }
        cout<<mx-min<<endl;
    }
    return 0;
}
