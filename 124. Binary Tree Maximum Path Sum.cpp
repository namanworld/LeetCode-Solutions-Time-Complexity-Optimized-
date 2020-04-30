class Solution {
public:
    int maxPathSum(TreeNode* root) 
    {
        int max = -999999;        
        partialMaxPathSum(root, max);
        return max;
    }
    
    int  partialMaxPathSum(TreeNode* root, int& max) 
    {
        if(root == nullptr)
        {
            return 0;    
        }
      
        int left = partialMaxPathSum(root->left, max);
        int right = partialMaxPathSum(root->right, max);        
        
        max = std::max(left+right+root->val, max);
        int ret = root->val + std::max(left, right);
        return ret > 0 ? ret : 0;        
    }
    
};
