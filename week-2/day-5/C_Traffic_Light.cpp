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
        char c;
        string s;
        cin >> n >> c >> s;

        vector<int> g_index;

      
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                g_index.push_back(i);
            }
        }

        int distance = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                
                auto dist = lower_bound(g_index.begin(), g_index.end(), i);

                if (dist != g_index.end())
                {
                    
                    distance = max(distance, *dist - i);
                }
                else
                {
                    
                    distance = max(distance, n - i + g_index.front());
                }
            }
        }
        
        cout << distance << endl;
    }
}
