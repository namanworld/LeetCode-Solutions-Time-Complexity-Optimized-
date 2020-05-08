class Solution {
public:
    #include <bits/stdc++.h>
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()<=1) return nums;
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int i=0, j=nums.size()-1, leftSum=0, rightSum = 0;
        while(i<=j){
            if(leftSum < rightSum){
                leftSum+=nums[i++];
            }
            else{
                ans.push_back(nums[j]);
                rightSum+=nums[j--];
            }
            if(i>j && leftSum >= rightSum){
                    ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};
