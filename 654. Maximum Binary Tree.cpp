class Solution {
public:
    TreeNode* helper(vector<int> nums, int s, int e){
        if(s==e) return NULL;
        
        int maxIndex = s, curr = INT_MIN;
        for(int i=s; i<e; i++){
            if(curr<nums[i]) {
                curr = nums[i];
                maxIndex = i;
            }
        }
        
        TreeNode* newNode = new TreeNode(nums[maxIndex]);
        
        newNode -> left = helper(nums, s, maxIndex);
        newNode -> right = helper(nums, maxIndex+1, e);
        
        return newNode;
        
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size());
    }
};
