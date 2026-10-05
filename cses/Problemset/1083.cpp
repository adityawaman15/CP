// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/18971521/
// Solved on: 2026-10-05T09:02:01.356Z

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    unordered_map <int,bool> mark;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        mark[x] = true;
    }

    for(int i = 1; i <= n;i++){
        if(!mark[i]){
            cout << i;
            break;
        }
        
    }

}