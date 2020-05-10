NAIVE APPROACH:
class Solution {
public:
    #include <bits/stdc++.h>
    
    map<int, bool> twoSum;
    
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(twoSum.count(k-root->val)>0) return true;
        else twoSum[root->val] = true;
        
        return findTarget(root->left, k) || findTarget(root->right, k);
        
    }
};


