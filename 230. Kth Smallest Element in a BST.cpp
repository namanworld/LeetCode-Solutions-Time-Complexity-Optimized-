class Solution {
public:
    #include <bits/stdc++.h>
    
    void inorder(TreeNode *root, vector<int> &v){
        if(!root) return;
        
        inorder(root->left,v);
        v.emplace_back(root->val);
        inorder(root->right,v);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);
        return v[k-1];
    }
};
