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
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum < k)
        {
            cout << -1 << endl;
           
        }
        else if (sum == k)
        {
            cout << 0 << endl;
          
        }
        else{
int left = 0, current_sum = 0, max_length = 0;
        for (int right = 0; right < n; right++)
        {
            current_sum += v[right];

            while (current_sum > k)
            {
                current_sum -= v[left];
                left++;
            }

            if (current_sum == k)
            {
                max_length = max(max_length, right - left + 1);
            }
        }

        if (max_length > 0)
        {
            cout << n - max_length << endl;
        }
        else
        {
            cout << -1 << endl;
        }

        }
        
    }
    return 0;
}