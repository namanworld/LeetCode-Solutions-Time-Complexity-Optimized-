class Solution {
public:
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;
        
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    
    int getMinimumDifference(TreeNode* root) {
        int ans = INT_MAX;
        vector<int> v;
        inorder(root, v);
        for(int i=1; i<v.size(); i++){
            ans = min(ans, v[i]-v[i-1]);
        }
        return ans;
    }
};
