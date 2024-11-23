#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    int l = 0;
    long long count = 0;
    int uniqueCount = 0;

    for (int r = 0; r < n; r++)
    {
        if (freq[a[r]] == 0)
        {
            uniqueCount++;
        }
        freq[a[r]]++;

        while (uniqueCount > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                uniqueCount--;
            }
            l++;
        }

        count += (r - l + 1);
    }

    cout << count << endl;
    return 0;
}
