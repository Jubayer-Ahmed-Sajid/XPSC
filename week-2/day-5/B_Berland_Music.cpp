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
        int a[n];
        int b[n];
        map<int,int> mp;
        vector<int> liked;
        vector<int> disliked;
        for (int i = 0; i < n; i++)
            {
                cin>>a[i];
                b[i] = a[i];
                mp[a[i]]=i;
            }
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
            {
                if(s[i]=='0'){
                    disliked.push_back(a[i]);
                }
                else liked.push_back(a[i]);
            }
            sort(liked.begin(),liked.end(),greater<>());
            sort(disliked.begin(),disliked.end(),greater<>());
            sort(a,a+n,greater<>());

            int i ;
            for (i = 0; i < liked.size(); i++)
                {
                    b[mp[liked[i]]] = a[i];
                }
            for(int j =0;j<disliked.size();j++){
                b[mp[disliked[j]]] = a[i];
                i++;
            }
            for(int k = 0;k<n;k++){
                cout<<b[k]<<" ";
            }
            cout<<endl;
    }
    return 0;
}