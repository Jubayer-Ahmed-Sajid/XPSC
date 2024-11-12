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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(),a.end(),greater<>());
        sort(b.begin(),b.end(),greater<>());
    
       int newLength = min(n, m);
        long long sum = 0;
        for(int i =0;i<newLength;i++){
            if((h*b[i]) < a[i]){
                sum += h*b[i];
            }
            else sum+= a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}