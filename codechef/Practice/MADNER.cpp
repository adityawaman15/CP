// Problem: MADNER
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/ANANTYA26R1/problems/MADNER
// Solved on: 2026-10-06T15:06:22.916Z

class Solution {
public:
    int findMaximumPairs(const string &students) {
        
        
        
 
            
            int i = 0;
            int count = 0;
            
            while(i < students.length()-1){
                if(students[i] != students[i+1]){
                    count++;
                    i+=2;
                }
                else{
                    i++;
                }
            }
            
            return count;
        
        
    }
};
