// Problem: PANSTACK
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/ANANTYA26R1/problems/PANSTACK
// Solved on: 2026-10-06T14:06:07.169Z

#include <bits/stdc++.h>
using namespace std;


int solve(int N){
    if(N == 1){
        return 1;
    }
    
    return (N +solve(N-1))%1000000007;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	
	
	while(T--){
	    int N;
	    cin >> N;
	    long long ans = 1;
	    
	    for(int i = N; i >0;i--){
	        ans = ((ans%1000000007)*(i%1000000007))%1000000007;
	    }
	    
	    cout << solve(N) << "\n";
	}

}
