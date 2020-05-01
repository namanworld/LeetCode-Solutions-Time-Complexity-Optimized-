Runtime: 0 ms, faster than 100.00% of C++ online submissions for Same Tree.
Memory Usage: 9.8 MB, less than 80.56% of C++ online submissions for Same Tree.

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p || !q) return false;
        
        if(p->val!=q->val) return false;
        
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
