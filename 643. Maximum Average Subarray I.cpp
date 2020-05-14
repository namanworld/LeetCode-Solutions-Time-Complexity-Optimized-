#include <bits/stdc++.h>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int maxSum = INT_MIN, currSum = 0;
        currSum = accumulate(nums.begin(), nums.begin()+k, currSum);
        maxSum = max(maxSum, currSum);
        for(int i=1; i<nums.size()-k+1; i++){
            currSum+=nums[i+k-1]-nums[i-1];
            if(currSum > maxSum) maxSum = currSum;
        }
        return 1.0*maxSum/k;
    }
};
