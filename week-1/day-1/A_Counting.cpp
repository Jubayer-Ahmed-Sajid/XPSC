#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int numbers = (b-a) + 1;
    if (numbers > 0) cout<<numbers;
    else cout<<0<<endl;
    return 0;
}