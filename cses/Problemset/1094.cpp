// Problem: Task
// Platform: cses
// Language: unknown
// Verdict: ACCEPTED
// URL: https://cses.fi/problemset/result/18981824/
// Solved on: 2026-10-06T06:13:58.421Z

    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        long long n;
        cin >> n;
        int arr[n];

        long long count = 0;

        cin >> arr[0];

        for(int i = 1; i < n; i++){
            cin >> arr[i];
            if(arr[i] < arr[i-1]){
                count += arr[i-1] - arr[i];
            }
        }
        cout << count;
    ;




        //5 3 2 5 1 7

    }