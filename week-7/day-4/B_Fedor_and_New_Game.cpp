#include <bits/stdc++.h>
using namespace std;

int counts(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += (num & 1);
        num >>= 1;
    }
    return count;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> armies(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> armies[i];
    }

    int fedors = armies[m];
    int frnds = 0;

    for (int i = 0; i < m; i++)
    {
        int distance = counts(fedors ^ armies[i]);
        if (distance <= k)
        {
            frnds++;
        }
    }

    cout << frnds << endl;
    return 0;
}
