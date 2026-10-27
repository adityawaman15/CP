// Problem: Merge k Sorted Arrays
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1
// Solved on: 2026-10-27T09:28:27.711Z

class Solution {
  public:
  
    class Node{
        public:
        int data;
        int row;
        int col;
        
        Node(int d, int r, int c){
            data = d;
            row = r;
            col = c;
        }
        
    };
    
    
    class compare{
        public:
            bool operator()(Node* a, Node* b){
                return a->data > b->data;
            }
    }
    ;
    
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        
        
        //make ueue
        priority_queue<Node*,vector<Node*>, compare> min_heap;
        vector<int> ans;
        
        
        
        //make heap of k elements
        
        for(int i = 0; i < mat.size();i++){
            Node* temp = new Node(mat[i][0], i, 0);
            min_heap.push(temp);
        }
        
        //delete and insert the least element
        while(min_heap.size() > 0){
            Node* temp = min_heap.top();
            min_heap.pop();
            
            int data = temp->data;
            int i = temp->row;
            int j = temp->col;
            ans.push_back(data);
            
            if(j+1 < mat[i].size()){
                temp = new Node(mat[i][j+1], i, j+1);
                min_heap.push(temp);
            }
        }
        
        return ans;
        
    }
};