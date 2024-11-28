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
        int zero = 0;
        int nonZero = 0;
        for (int i = 0; i < n; i++)
            {
                if(v[i] == 0) zero++;
                else nonZero++;
            }
        int mex = 0;
        if(zero ==0) mex = 0;
        else {
            if(nonZero >= zero -1) mex = 0;
            else{
                int mx = *max_element(v.begin(),v.end());
                if(mx==1) mex = 2;
                    else mex =1;
            }
        }
        cout<<mex<<endl;
    }
    return 0;
}
