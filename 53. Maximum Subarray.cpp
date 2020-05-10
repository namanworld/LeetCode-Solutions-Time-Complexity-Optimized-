class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Applying kedane formula;
        if(nums.size()==0) return 0;
        int currSum = nums[0], maxSum = nums[0];
        for(int i=1; i<nums.size(); i++){
            currSum = max(nums[i], currSum+nums[i]);
            if(maxSum < currSum) maxSum = currSum;
            else if(currSum <= 0) currSum = 0;
        }
        return maxSum;
        
    }
};


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN,max_ending_here = 0;
        for(int i=0;i<nums.size();i++)
        {
            max_ending_here+=nums[i];
            if(max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if(max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
        
    }
};
