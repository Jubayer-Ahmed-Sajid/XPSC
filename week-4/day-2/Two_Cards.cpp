#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        for (long long i = 0; i < n; i++)
            cin >> b[i];

        long long mx_alice = 0;
        long long alice_index= 0;

        for (long long i = 0; i < n; i++)
        {
            if (a[i] > mx_alice)
            {
                mx_alice = a[i];
                alice_index= i;
            }
        }
        for (long long i = 0; i < n; i++)
        {
            if (b[i] > mx_alice)
            {
                mx_alice = b[i];
                alice_index= i;
            }
        }

        long long mx_bob = 0;
        long long bob_index = -1;
        bool canWin = true;
        for (long long i = 0; i < n; i++) {
            if (i == alice_index) continue;
            mx_bob = max(mx_bob, max(a[i], b[i]));
            if(mx_bob >= mx_alice){
                canWin =false;
                break;
            }
        }
        
        if (canWin)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}