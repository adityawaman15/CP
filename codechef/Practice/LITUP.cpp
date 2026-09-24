// Problem: LITUP
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START257D/problems/LITUP
// Solved on: 2026-09-24T06:30:06.986Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> cost(N);

        for (int i = 0; i < N; i++) {
            cin >> cost[i];
        }

        // Two lights cannot cover more than 2*(2K+1) stalls
        if (N > 2 * (2 * K + 1)) {
            cout << -1 << '\n';
            continue;
        }

        int ans = INT_MAX;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {

                // Coverage of first light
                int l1 = max(0, i - K);
                int r1 = min(N - 1, i + K);

                // Coverage of second light
                int l2 = max(0, j - K);
                int r2 = min(N - 1, j + K);

                // Make sure first interval is the left one
                if (l1 > l2) {
                    swap(l1, l2);
                    swap(r1, r2);
                }

                // Check if the two intervals cover everything
                if (l1 == 0 && r2 == N - 1 && l2 <= r1 + 1) {
                    ans = min(ans, cost[i] + cost[j]);
                }
            }
        }

        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
}