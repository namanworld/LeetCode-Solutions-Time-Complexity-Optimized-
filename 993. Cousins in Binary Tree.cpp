Runtime: 4 ms, faster than 65.67% of C++ online submissions for Cousins in Binary Tree.
Memory Usage: 10.9 MB, less than 100.00% of C++ online submissions for Cousins in Binary Tree.

class Solution {
public:
    int sibling(TreeNode* root, int a, int b){
        if(!root) return 0;
        bool ans = 0;
        if(root->left&&root->right){
            ans = (root->left->val==a && root->right->val==b)||(root->left->val==b && root->right->val==a);
        }
        
        return ans || sibling(root->left, a, b) || sibling(root->right, a, b);
            
    }
    
    int depth(TreeNode* root, int x){
        if(!root) return -1;
        if(root->val == x) return 1;
        
        int left = depth(root->left, x);
        if(left!=-1) return 1+left;
        
        int right = depth(root->right, x);
        if(right!=-1) return 1+right;
        
        return -1;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        return (depth(root, x)==depth(root, y)) && !sibling(root, x, y);   
    }
};
