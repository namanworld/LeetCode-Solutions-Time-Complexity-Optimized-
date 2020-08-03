/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode *t;
    vector<int> res;
    int k;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        t = target;
        k = K;
        dfs(root);
        return res;
    }
    
    int dfs(TreeNode* root){
        if(!root) return -1;
        if(root==t){
            f(t, 0);
            return 1;
        }
        else {
            int left = dfs(root->left), right = dfs(root->right);
            if(left!=-1){
                if(left == k) res.push_back(root->val);
                f(root->right, left+1);
                return left+1;
            }
            else if(right!=-1){
                if(right == k) res.push_back(root->val);
                f(root->left, right+1);
                return right+1;
            }
            else return -1;
        }
    }
    
    void f(TreeNode* root, int dist){
        if(!root) return;
        if(dist == k) res.push_back(root->val);
        else{
            f(root->left, dist+1);
            f(root->right, dist+1);
        }
    }
};
