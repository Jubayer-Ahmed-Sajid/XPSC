#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> servers;
    for (int i = 0; i < n; i++)
    {
        string serv, ip;
        cin >> serv >> ip;
        
        servers[ip] = serv;
    }

    map<string, string> commands;
    for (int i = 0; i < m; i++)
    {
        string comm, ip;
        cin >> comm >> ip;
        ip.pop_back();
       
        cout<<comm<<" "<<ip<<"; #"<<servers[ip]<<endl;
    }
    
   
    return 0;
}