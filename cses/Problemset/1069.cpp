// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/18971593/
// Solved on: 2026-10-05T09:10:06.448Z

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    long long max_rep = INT_MIN;
    char curr = s[0];
    long long rep = 0;

    for(char ch:s){
        if(ch == curr){
            rep++;
            max_rep = max(rep,max_rep);
        }
        else{
            curr = ch;
            rep = 1;
        }
    }

    cout << max_rep;

    
    


}