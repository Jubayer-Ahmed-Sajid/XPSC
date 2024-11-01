#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int,int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v[num]++;
    }

    int boxes = INT_MIN;
    for(auto [x,y]: v){
       if(boxes < y){
        boxes = y;
       }
    }
    cout<<boxes;
    return 0;
}