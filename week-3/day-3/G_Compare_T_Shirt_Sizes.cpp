#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        {
             string first, second;
        cin >> first >> second;
        int first_length = first.length();
        int second_length = second.length();

        unordered_map<char, int> mp;
        mp['S'] = -1;
        mp['M'] = 60;
        mp['L'] = 3100;
        //  cout << (first_length - 1)* mp[first[first_length - 1]]<<endl;
        if (((first_length) * mp[first[first_length - 1]]) > ((second_length )* mp[second[second_length - 1]]))
        {
            cout<<">"<<endl;
           
        }
        else if (((first_length) * mp[first[first_length - 1]]) == ((second_length) * mp[second[second_length - 1]]))
        {
            cout << "=" << endl;
        }
        else
            cout << "<" << endl;
        }
    return 0;
}