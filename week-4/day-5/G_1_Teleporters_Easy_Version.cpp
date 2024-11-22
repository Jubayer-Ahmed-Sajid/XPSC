#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            {
                cin>>v[i];
                v[i]= v[i]+i+1;
            }
        sort(v.begin(),v.end());
        long long sum=0;
        int num =0;
        for (int i = 0; i < n; i++)
            {
                sum+= v[i];
                if(sum>c){
                    num = i;
                    break;
                }
                else num = n;
            }
            
           cout<<num<<endl;
    }
    return 0;
}