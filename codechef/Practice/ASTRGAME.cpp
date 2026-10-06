// Problem: ASTRGAME
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/ANANTYA26R1/problems/ASTRGAME
// Solved on: 2026-10-06T15:06:58.308Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--){
	    string whiteboard; 
	    cin >> whiteboard;
	    
	    int N;
	    cin >> N;
	    string dictionary[N];
	    for(int i = 0; i < N; i++){
	        cin >> dictionary[i];
	    }
	    
	    bool flag = 1; 
	    
	    
	    
	    for(int i = 0; i < N;i++){
	        
	        if(whiteboard.find(dictionary[i]) != std::string::npos){

	            int Addition =(dictionary[i].length() + whiteboard.find(dictionary[i]));
	            
	            for(int j = whiteboard.find(dictionary[i]); j< Addition;j++){

	                
	                whiteboard[j] = ' ';
	            }

	            flag = !flag;
	        }
	    }
	    

	    if(!flag){
	        cout << "Teddy\n";
	    }
	    else{
	        cout << "Tracy\n";
	    }
	    
	    
	    
	    
	    
	}

}
