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
        int a, b, n, s;
        cin >> a >> b >> n >> s;
        int remaining = n % s;
        int result = s/n;
       
        if(a>= result){
            if(((n*result)+b)>=s) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(a<result){
            if(((a*n)+b)>= s) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}