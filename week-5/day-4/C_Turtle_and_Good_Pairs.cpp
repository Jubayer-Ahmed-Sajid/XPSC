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
        vector<pair<int,char>> frq(26);
        for (int i = 0; i < 26; i++)
            {
                frq[i].second= 'a'+i;
            }
        for(char c:s){
            frq[c-'a'].first++;
        }

        sort(frq.rbegin(),frq.rend());
        string result(n,' ');
        int x=0;
        for(auto [y,z]:frq){
            if(y ==0) break;
            for(int i =0;i<y;i++){
                if(x>=n) x =1;
               
                result[x]=z;
                x+=2;
            }
        }
        cout<<result<<endl;

    }
    return 0;
}