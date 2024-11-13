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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, vector<int>> mp;
        
        
        for (int i = 0; i < n; i++)
            {
                for(int j =0;j< n-1;j++){
                    int num;
                    cin>>num;
                    mp[num].push_back(j);
                    
                }
            }
            for(auto[x,y]: mp){
                sort(y.begin(),y.end());
                if(y.front() == (n-2) && y.back() == n-2){
                   v[n-1] =x;
                }
                else if(y.back()==(n-2) && y.front() !=(n-2)){
                    v[n-2] = x;
                }
                else v[y.back()] = x;
               
            }
            for(auto val: v){
                cout<<val<<" ";
            }
            cout<<endl;
        
    }
    return 0;
}