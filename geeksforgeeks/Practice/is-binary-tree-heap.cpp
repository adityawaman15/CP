// Problem: 🔥 Binary Tree Max-Heap Check: Easy Intuition & Step-by-Step Breakdown
// Platform: geeksforgeeks
// Language: unknown
// Verdict: Accepted
// URL: https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1
// Solved on: 2026-10-26T13:04:19.989Z

/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    bool Check_CBT(Node* root, int node_count, int value){
        if(root == NULL){
            return true;
        }
        
        if(value >= node_count){
            return false;
        }
        
        bool left = Check_CBT(root->left,node_count, 2*value+1);
        bool right = Check_CBT(root->right, node_count,2*value+2);
        
        return left && right;
    }
    
    bool Max_heap(Node* root){
        if(root ->left == NULL && root->right == NULL){
            return true;
        }
        
        
        if(root->right == NULL){
            if(root->left->data < root->data){
                return true;
            }
            
        }
        
        if(root->right && root->left && root->right->data < root->data && root->left->data < root->data && Max_heap(root->left) && Max_heap(root->right)){
            return true;
        }
        
        return false;
        
        
    }
    
    void Inorder(Node* root, int &count){
        if(root == NULL){
            return;
        }
        
        Inorder(root->left,count);
        count++;
        Inorder(root->right,count);
        
        
    }
    bool isHeap(Node* root) {
        int count = 0;
        Inorder(root,count);
        if(Check_CBT(root,count,0) && Max_heap(root)){
            return true;
        }
        return false;
        
        
    }
};