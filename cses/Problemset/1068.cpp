// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/18971420/
// Solved on: 2026-10-05T08:52:07.073Z

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n!= 1){
        cout << n << " ";
        if(n%2){
            n = 3*n +1;
        }
        else{
            n/=2;
        }
    }
    cout << n;
}