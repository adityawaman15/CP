// Problem: USANBOLT
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/icpc/ICPCTR28/problems/USANBOLT
// Solved on: 2026-09-29T13:06:20.808Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
	cin >> T;
	while(T--){
	    int finish, distance, acc, bspeed;
	    cin >> finish >> distance >> acc >> bspeed;
	    
	    float time_bolt = float(finish)/float(bspeed);
	    float time_tiger = pow((2 * float(distance+finish))/acc,0.5);
	    
	    if(time_tiger <= time_bolt){
	        cout << "Tiger";
	    }
	    else{
	        cout << "Bolt";
	    }
 	    cout <<"\n";
	}
	

}
