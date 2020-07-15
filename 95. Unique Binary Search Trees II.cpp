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
    vector<TreeNode*> helper(int s, int e){
        if(s > e) return {NULL};
        
        vector<TreeNode*> res;
        
        for(int i=s; i<=e; i++){
            vector<TreeNode*> left = helper(s, i-1);
            vector<TreeNode*> right = helper(i+1, e);
            
            for(int j=0; j<left.size(); j++){
                TreeNode* l = left[j];
                for(int k=0; k<right.size(); k++){
                    TreeNode* r  = right[k];
                    TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return helper(1, n);
    }
};
