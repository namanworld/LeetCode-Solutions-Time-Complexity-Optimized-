Runtime: 0 ms, faster than 100.00% of C++ online submissions for Second Minimum Node In a Binary Tree.
Memory Usage: 7 MB, less than 100.00% of C++ online submissions for Second Minimum Node In a Binary Tree.

class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        int minSec = -1;
        dfs(root, root->val,minSec);
        return minSec;
    }
    
    void dfs(TreeNode *root, int globalMin, int &minSec){
        if(!root) return;
        if(globalMin<root->val && (minSec == -1 || root->val<minSec)){
            minSec = root->val;
        }
        dfs(root->left, globalMin, minSec);
        dfs(root->right, globalMin, minSec);
    }
};
