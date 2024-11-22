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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            {
                v[i] = s[i]-'0';
            }
        vector<char> ch;
        for (int i = n-1; i >= 0; )
            {
                
                if(v[i]==0) {
                   int number =( v[i-2]*10)+v[i-1];
                    ch.push_back(number+('a'-1));
                   if(i-3 >= 0) i-=3;
                   else break;
                }
                if(v[i]!=0){
                    ch.push_back(v[i]+('a'-1));
                    if(i-1>=0)i--;
                    else break;
                    
                }
            }
        reverse(ch.begin(),ch.end());
        for(char c:ch){
            cout<<c;
        }
            cout<<endl;

    }
    return 0;
}