#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    int sereja = 0;
    int dima = 0;
    bool sereja_turn = true;

    while (i <= j)
    {

        if (arr[i] > arr[j])
        {
            if (sereja_turn)
                sereja += arr[i];
            else
                dima += arr[i];
            i++;
        }
        else
        {
            if (sereja_turn)
                sereja += arr[j];
            else
                dima += arr[j];
            j--;
        }
        sereja_turn = !sereja_turn;
    }
    cout << sereja << " " << dima;
    return 0;
}