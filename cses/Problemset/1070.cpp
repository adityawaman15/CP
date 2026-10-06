// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/18982070/
// Solved on: 2026-10-06T06:32:32.115Z

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;

    if(n < 5){
        cout << "NO SOLUTION";
    }
    else{
        int i = 1;
        int j = 4;
        while(j<=n){
            cout << i << " ";
            cout << j << " ";
            i++;
            j++;
        }
        if(n%2){
            cout << i;
        }
    }


}