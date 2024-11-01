#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<string> chats;
    for (int i = 0; i < n; i++)
    {
        string chat;
        cin >> chat;
        chats.push(chat);
    }
    map<string,bool> uniques;
    vector<string> names;
    while (!chats.empty())
    {
        string name = chats.top();
        chats.pop();
        if(!uniques[name]){

            names.push_back(name);
            uniques[name] = true;
        }
    }
    for (auto x : names)
    {
        cout << x << endl;
    }
    return 0;
}