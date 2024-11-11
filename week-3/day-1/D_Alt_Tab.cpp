#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    deque<string> programs;
    unordered_set<string> opened;

    for (int i = 0; i < n; ++i)
    {
        string program;
        cin >> program;

        if (opened.find(program) == opened.end())
        {

            programs.push_front(program);
            opened.insert(program);
        }
        else
        {

             programs.erase(find(programs.begin(), programs.end(), program));
            programs.push_front(program);
        }
    }

    for (const auto program : programs)
    {
        cout << program.substr(program.size() - 2);
    }
    cout << endl;

    return 0;
}
