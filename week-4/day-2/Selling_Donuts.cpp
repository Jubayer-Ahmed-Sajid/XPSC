#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int,int> a;
        vector<int> b(m);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin>>num;
            a[i+1]=num;
        }
      
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int cnt=0;
        for (int i = 0; i < m; i++)
            {
                if(a[b[i]] ==0){
                    cnt++;
                }
                else{
                    a[b[i]]--;
                }
            }
        cout<<cnt<<endl;
    
    }
    return 0;
}