#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<string> names;
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        auto it = find(names.begin(),names.end(),s);
        if(it == names.end()){
            cout<<"NO"<<endl;
            names.push_back(s);
        }
        else {
            cout<<"YES"<<endl;
            names.push_back(s);
        }
    }

    return 0;
}