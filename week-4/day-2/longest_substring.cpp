#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k)
{
    int l = 0, r = 0, ans = 0;
    map<char, int> cnt;
    int n = s.size();
    while (r < n)
    {
        cnt[s[l]]++;
        if (cnt.size() == k)
        {
            ans = max(ans, (r - l + 1));
        }
        else{
            while(cnt.size()>k){
                cnt[s[l]]--;
                if(cnt[s[l]] ==0){
                    cnt.erase(s[l]);
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}