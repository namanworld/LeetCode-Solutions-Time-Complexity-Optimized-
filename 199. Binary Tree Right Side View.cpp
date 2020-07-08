class Solution {
public:
    void helper(TreeNode* root, int curr, int &maxLev, vector<int> &v){
        if(!root) return;
        
        if(curr > maxLev){
            v.push_back(root->val);
            maxLev = curr;
        }
        
        helper(root->right, curr+1, maxLev, v);
        helper(root->left, curr+1, maxLev, v);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        int maxLev = 0;
        vector<int> v;
        helper(root, 1, maxLev, v);
        return v;
    }
};
