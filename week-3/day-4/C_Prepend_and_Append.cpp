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
        deque<char> s;
        for (int i = 0; i < n; i++)
            {
                char c;
                cin>>c;
                s.push_back(c);
            }
        while(!s.empty()){
            if(s.front() != s.back()){
                s.pop_front();
                s.pop_back();
            }
            if(s.front() ==s.back()){
                break;
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}