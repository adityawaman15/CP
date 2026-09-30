// Problem: STAIRCASE7
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START258D/problems/STAIRCASE7
// Solved on: 2026-09-30T16:51:07.349Z

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

        map<int, int> mp;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            mp[x - i]++;
        }

        int high = 0;

        for (auto p : mp) {
            high = max(high, p.second);
        }

        cout << N - high << '\n';
    }
}