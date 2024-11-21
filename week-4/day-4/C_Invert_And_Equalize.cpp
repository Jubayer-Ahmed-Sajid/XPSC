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
        string s;
        cin>>s;
        int ones_cnt=0, zeros_cnt = 0;
        for (int i = 0; i < n; i++)
            {
                if(s[i] == s[i+1]) continue;
                else {
                    if(s[i]=='0'){
                        zeros_cnt++;
                    }
                    else ones_cnt++; 
                }
            }
    cout<<min(ones_cnt,zeros_cnt)<<endl;
    }
    return 0;
}