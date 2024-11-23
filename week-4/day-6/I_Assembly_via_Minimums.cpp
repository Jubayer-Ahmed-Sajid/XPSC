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
        vector<int> a(n);
        int m = (n*(n-1))/2;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
            {
                cin>>b[i];
            }
        sort(b.begin(),b.end());
        int x = 1, ind = 0;
        int b_ind = n-x;
        while(n-x>=0){
            a[ind] = b[b_ind-1];
            x++;
            b_ind += n-x;
            ind++;
        }
        a[n-1]= 1000000000;
        for(int i: a){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;
}