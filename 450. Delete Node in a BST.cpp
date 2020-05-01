class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        
        if(root->val == key){
            if(!root->left && !root->right) return NULL;
            else if(!root->left) return root->right;
            else if(!root->right) return root->left;
            else{
                TreeNode *temp = root->right;
                while(temp->left){
                    temp = temp->left;
                }
                temp->left = root->left;
                return root->right;
            }
        }
        
        root->left = deleteNode(root->left, key);
        root->right = deleteNode(root->right, key);
        
        return root;
    }
};
