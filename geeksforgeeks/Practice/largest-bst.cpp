// Problem: Largest BST Subtree
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/largest-bst/1
// Solved on: 2026-10-23T19:43:26.541Z

/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    class info{
        public:
            int size;
            bool isBST;
            int mini;
            int maxi;
            
    }
    ;
    info solve(Node* root, int &max_size){
        if(root == NULL){
            return {0,true,INT_MAX,INT_MIN};
        }
        
        info left = solve(root->left,max_size);
        info right = solve(root->right,max_size);
        
        info curr;
        
        curr.size = left.size + right.size + 1;
        curr.maxi = max(root->data,right.maxi);
        curr.mini = min(root->data,left.mini);
        
        if(root->data > left.maxi && root->data <  right.mini && (left.isBST && right.isBST)){
            curr.isBST = true;
            max_size = max(max_size,curr.size);
        }
        else{
            curr.isBST = false;
            curr.size = 0;
        }
        
        
        
        return curr;
        
    }
    int largestBst(Node *root) {
        
        int max_size = 1;
        
        info ans = solve(root, max_size);
        return max_size;
        
        
        
    }
};