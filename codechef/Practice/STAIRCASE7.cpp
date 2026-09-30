// Problem: STAIRCASE7
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/START258D/problems/STAIRCASE7
// Solved on: 2026-09-30T15:20:54.016Z

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
	    int arr[N];
	    map <int,pair<int,bool>> mark;
	    
	    for(int i = 0; i < N;i++){
	        cin >> arr[i];
	    }
	    int first = arr[0];
	    mark[first+1] = make_pair(1,1);
	   
	    
	    cout << N-high << "\n";
	}

}
