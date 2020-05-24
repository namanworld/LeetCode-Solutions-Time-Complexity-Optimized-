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
    bool isLeaf(TreeNode* root){
        return root->left==NULL && root->right==NULL;
    }
    
    int count = 0;
    
    void paths(TreeNode* root, vector<int> &res){
        if(!root) return;
        res.push_back(root->val);
        if(isLeaf(root)){
            int temp[10] = {0};
            for(int data:res){
                temp[data]++;
            }
            int oddCount = 0;
            for(int x:temp){
                if(x%2!=0) oddCount++;
            }
            if(oddCount<=1) count++;
        }
        paths(root->left, res);
        paths(root->right, res);
        res.pop_back();
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> res;
        paths(root, res);
        return count;
    }
};
