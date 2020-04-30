Runtime: 4 ms, faster than 56.71% of C++ online submissions for Increasing Order Search Tree.
Memory Usage: 7.9 MB, less than 100.00% of C++ online submissions for Increasing Order Search Tree.

class Solution {
public:
    void inorder(TreeNode* root, vector<TreeNode*> &v){
        if(root==NULL) return;
        inorder(root->left, v);
        v.push_back(root);
        inorder(root->right, v);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*> v;
        inorder(root, v);
        
        for(int i=0; i<v.size(); i++){
            if(i==v.size()-1){
                v[i]->right = NULL;
            }
            else{
                v[i]->right=v[i+1];
            }
            v[i]->left=NULL;
        }
        
        return v[0];
        
    }
};
