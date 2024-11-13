#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int arr[n];
    int arr_two[m];
    for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
    for (int i = 0; i < m; i++)
        {
            cin>>arr_two[i];
            
        }
    int l =0;
    int r =0;
    int cnt = 0;
    vector<int> ans;
    while(r < m){
        if(l < n && arr[l] < arr_two[r]){
            l++;
            cnt++;

        }
        else {
            r++;
            ans.push_back(cnt);
        }
    }
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}