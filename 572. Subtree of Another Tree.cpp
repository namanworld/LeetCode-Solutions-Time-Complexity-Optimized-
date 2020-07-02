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
    string a, b;
    void k(TreeNode* root, string &s){
        if(!root) {
            s+="null";
            return;
        }
        
        s+='#'+to_string(root->val);
        k(root->left, s);
        k(root->right, s);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s && !t) return true;
        if(!s ^ !t) return false;
        
        a = "";
        b = "";
        k(s, a);
        k(t, b);
        cout<<a<<endl;
        cout<<b<<endl;
        if(a.find(b)!=string::npos) return true;
        return false;
    }
};
