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
        int n;
        cin >> n;
        vector<int> dolls(n);

        for (int i = 0; i < n; i++)
        {
            cin >> dolls[i];
        }

        sort(dolls.begin(), dolls.end());

        unordered_map<int, int> freq;
        for (int size : dolls)
        {
            freq[size]++;
        }

        int sets = 0;

        for (int size : dolls)
        {
            if (freq[size] > 0)
            {
                int current = size;

                while (freq[current] > 0)
                {
                    freq[current]--;
                    current++;
                }
                sets++;
            }
        }

        cout << sets << endl;
    }

    return 0;
}
