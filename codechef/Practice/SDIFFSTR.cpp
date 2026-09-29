// Problem: SDIFFSTR
// Platform: codechef
// Language: #include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--){
	    string s;
	    string ans;
	    int k;
	    cin >> s >> k;
	    
	    if(26-s.length()+k <13){
	        cout << "NOPE"<< "\n";
	        continue;
	    }
	    
	    map<char,bool,greater<char>> mark;
	    for(char ch:s){
	        mark[ch] = 1;
	    }
	    
	    for(char ch = 'a';ans.length()<s.length();ch++,k--){
	        while(mark[ch] && k<= 0){
	            ch++;
	        }
	        ans.push_back(ch);
	    }
	    
	    cout << ans << "\n";
	}

}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/icpc/ICPCTR28/problems/SDIFFSTR?tab=Help
// Solved on: 2026-09-29T14:02:33.817Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--) {
        string s, ans;
        int k;
        cin >> s >> k;

        int n = s.length();

        if (2 * n - k > 26) {
            cout << "NOPE\n";
            continue;
        }

        map<char, bool> mark;

        for(char ch : s)
            mark[ch] = true;

        for(char ch = 'a'; ch <= 'z' && ans.length() < n; ch++) {

            if(mark[ch]) {
                if(k > 0) {
                    ans.push_back(ch);
                    k--;
                }
            }
            else {
                ans.push_back(ch);
            }
        }

        cout << ans << '\n';
    }
}