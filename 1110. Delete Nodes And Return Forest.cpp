static const auto ____ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    unordered_set<int> del;
    vector<TreeNode *> res;
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(const int &x: to_delete)    del.insert(x);
        
        dfs(root);
    
        if(root != NULL && del.count(root->val) == 0) res.emplace_back(root);
        return res;
    }
    
    void dfs(TreeNode *&root) {
        if(root == NULL) return;
        
        dfs(root->left);
        dfs(root->right);
        
        if(root != NULL && del.count(root->val) == 1) {
            if(root->left != NULL)   res.emplace_back(root->left);
            if(root->right != NULL)  res.emplace_back(root->right);
            root = NULL;
        }
    }
};
