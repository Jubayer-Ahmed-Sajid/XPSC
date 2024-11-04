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
        int n, k;
        cin >> n >> k;
        int length = n - k;

        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            v.push_back(c);
        }
        int even = 0;
        int odd = 0;

        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[v[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            int cnt = freq[i];
            if (cnt % 2 == 0)
                even++;
            else
                odd++;
        }
        if (length % 2 == 0)
        {

            if (k < odd)
                cout << "NO" << endl;
            else if ((k - odd) % 2 == 0)
                cout << "YES" << endl;
            else if ((k - odd) % 2 != 0)
                cout << "NO" << endl;
        }
        else
        {
            if (k > odd)
            {
                if ((k - (odd - 1)) % 2 == 0)
                    cout << "YES" << endl;
                else if ((k - (odd - 1)) % 2 != 0)
                    cout << "NO" << endl;
            }
            else if((odd-k)==1){
                cout<<"YES"<<endl;
            }
            else if(odd >( k+1)) cout<<"NO"<<endl;
            
        }
    }
    return 0;
}