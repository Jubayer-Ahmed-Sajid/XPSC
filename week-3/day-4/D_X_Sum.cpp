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
        int n, m;
        cin >> n >> m;

        long long arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long sum = arr[i][j];
                int x = j - 1, y = j + 1;

                for (int k = i - 1; k >= 0; k--)
                {
                    if (x >= 0)
                    {
                        sum += arr[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += arr[k][y];
                        y++;
                    }
                }

                x = j - 1;
                y = j + 1;

                for (int k = i + 1; k < n; k++)
                {
                    if (x >= 0)
                    {
                        sum += arr[k][x];
                        x--;
                    }
                    if (y < m)
                    {
                        sum += arr[k][y];
                        y++;
                    }
                }

                ans = max(ans, sum);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
