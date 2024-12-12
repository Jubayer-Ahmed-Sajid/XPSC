#include <bits/stdc++.h>
using namespace std;
int maxN = (1LL << 15);
vector<int> allPalindrome;
bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.length();
    for (int i = 0; i < (len / 2); i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}

int main()
{
    markPalindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), cnt(maxN + 1);
        for (int i = 0; i < n; i++)
            {
                cin>>a[i];
                
            }
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allPalindrome.size(); j++)
            {
                int cur = (a[i] ^ allPalindrome[j]);
                ans += cnt[cur];
            }
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
