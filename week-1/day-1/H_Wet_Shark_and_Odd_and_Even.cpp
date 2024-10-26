#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    if (sum % 2 == 0)
        cout << sum;
    else
    {
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= min && arr[i] % 2 != 0)
                min = arr[i];
        }
        cout<<sum - min;
    }

    return 0;
}