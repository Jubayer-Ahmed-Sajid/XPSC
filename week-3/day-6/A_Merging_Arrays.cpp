#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int l = 0, r = 0;

    // Merge the two sorted arrays
    while (l < n && r < m) {
        if (a[l] <= b[r]) {
            c.push_back(a[l]);
            l++;
        } else {
            c.push_back(b[r]);
            r++;
        }
    }

    // Append remaining elements from array `a` if any
    while (l < n) {
        c.push_back(a[l]);
        l++;
    }

    // Append remaining elements from array `b` if any
    while (r < m) {
        c.push_back(b[r]);
        r++;
    }

    // Print the merged array
    for (int x : c) {
        cout << x << " ";
    }

    return 0;
}
