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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++)
        {
            int moves;
            cin >> moves;
            for (int i = 0; i < moves; i++)
            {

                char ch;
                cin >> ch;
                if (ch == 'D')
                {
                    if (arr[j] != 9)
                    {
                        arr[j] = arr[j] + 1;
                    }
                    else
                        arr[j] = 0;
                }
                if (ch == 'U')
                {
                    if (arr[j] != 0)
                    {
                        arr[j] = arr[j] - 1;
                    }
                    else
                        arr[j] = 9;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}