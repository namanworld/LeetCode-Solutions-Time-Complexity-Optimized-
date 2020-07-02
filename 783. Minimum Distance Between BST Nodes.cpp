class Solution {
public:
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;
        inorder(root->left, v);
        v.emplace_back(root->val);
        inorder(root->right, v);
    }
    
    int minDiffInBST(TreeNode* root) {
        if(!root) return 0;
        vector<int> v;
        inorder(root, v);
        int ans = INT_MAX;
        for(int i=1; i<v.size(); i++){
            ans = min(ans, v[i]-v[i-1]);
        }
        return ans;
    }
};
