// Problem: LITUP
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START257D/problems/LITUP
// Solved on: 2026-09-23T16:02:54.127Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	int N;
	int K;
	
	
	cin >> T;
	
	while(T--){
	    cin >> N >> K;
	    int cost[N];
	    
	    if(N-(2*(2*K + 1)) > 0){
	        cout << -1 << "\n";
	        continue;
	    }
	    
	    
	    for(int i = 0; i < N; i++){
	        cin >> cost[i];
	    }
	    
	    int A1,A2;
	    A1 = A2 = INT_MAX;
	    int taken = 0;
	    
	    int i = 0;
	    int j = 2*K +1;
	    
	    for(int i = 0; i< N && i< j ;i++){
	        if(cost[i] < A1){
	           A1 = cost[i];
	           taken = i;
	        }
	    }
	    for(int i = N-1; i>= 0 && i>= (N - (j-1)) ;i--){
	        if(i == taken){
	            continue;
	        }
	        if(cost[i] < A2){
	           A2 = cost[i];
	        }
	    }
	    
	    
	    cout << A1 + A2 << "\n";
	    
	    
	    
	    
	    
	}

}
