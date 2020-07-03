class Solution {
public:
    TreeNode* helper(vector<int> &preorder, int &i, int l, int h){
        if(i>=preorder.size()) return NULL;
        if(preorder[i]>l && preorder[i]<h){
            TreeNode* newNode = new TreeNode(preorder[i]);
            i++;
            if(i<preorder.size()){
                newNode->left = helper(preorder, i, l, newNode->val);
                if(i<preorder.size()) newNode->right = helper(preorder, i, newNode->val, h);
            }
            return newNode;
        }
        return NULL;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0; int lo = INT_MIN, hi = INT_MAX; 
        return helper(preorder, i, lo, hi);
    }
};
