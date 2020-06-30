/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    int sumRootToLeaf(TreeNode* root) {
        if(!root) return 0;
        vector<int> bits;
        dfs(root, bits);
        return ans;
    }
    
    void dfs(TreeNode* root, vector<int> v){
        v.push_back(root->val);
        if(!root->left && !root->right){
            int curr = 0;
            int i=0;
            while(v.size()>0){
                curr+=v.back()*pow(2, i++);
                v.pop_back();
            }
            ans+=curr;
        }
        else if(root->left && !root->right) dfs(root->left, v);
        else if(root->right && !root->left) dfs(root->right, v);
        else{
            dfs(root->left, v);
            dfs(root->right, v);
        }        
    }
};
