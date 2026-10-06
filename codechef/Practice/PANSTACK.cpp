// Problem: PANSTACK
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/ANANTYA26R1/problems/PANSTACK
// Solved on: 2026-10-06T13:55:34.013Z

#include <bits/stdc++.h>
using namespace std;

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
	    
	    cout << ans << "\n";
	}

}
