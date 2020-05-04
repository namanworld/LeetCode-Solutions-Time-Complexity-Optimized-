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
    #include <cstring>
    void preorder(TreeNode *root, string &s){
        if(!root) return;
        if(!root->left && !root->right){
            s+=to_string(root->val);
            return;
        }
        if(!root->right){
            
            s+=to_string(root->val) + '(';
            preorder(root->left, s);
            s+=')';
            return;
        }
        s+=to_string(root->val) + '(';
        preorder(root->left,s);
        s+=")(";
        preorder(root->right, s);
        s+=')';
    }
    
    string tree2str(TreeNode* t) {
        string res="";
        preorder(t, res);
        return res;
    }
};
