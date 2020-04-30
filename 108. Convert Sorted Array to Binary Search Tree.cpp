Runtime: 12 ms, faster than 99.98% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
Memory Usage: 20.9 MB, less than 97.30% of C++ online submissions for Convert Sorted Array to Binary Search Tree.

class Solution {
public:

    TreeNode* helper(vector<int> &nums,int s, int e){
        if(nums.size()==0) return NULL;
        if(s>e) return NULL;
        int mid = (s+e)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = helper(nums, s, mid-1);
        root->right = helper(nums, mid+1, e);

        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }
};
