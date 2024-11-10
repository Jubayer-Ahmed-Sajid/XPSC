#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        
        sort(A.begin(), A.end());

        
        int min_range = INT_MAX;
        if (N > 2) {
            
            min_range = min({A[N - 1] - A[2],  
                             A[N - 3] - A[0],   
                             A[N - 2] - A[1]});
        } else {
            min_range = 0; 
        }

        cout << min_range << "\n";
    }

    return 0;
}
