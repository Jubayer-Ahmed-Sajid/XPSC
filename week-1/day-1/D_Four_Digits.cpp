#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int a, b, c, d;
    a = n % 10;
    b =((n-a) / 10)%10;
    c =((((n-a) / 10)-b)/10)%10;
    d = (((((n-a) / 10)-b)/10)/10)%10;
    cout<<d<<c<<b<<a;

    return 0;
}