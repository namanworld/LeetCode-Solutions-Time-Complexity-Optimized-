#include <bits/stdc++.h>
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = LONG_MIN, max2 = LONG_MIN, max3 = LONG_MIN;
    
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==max1 || nums[i]==max2 || nums[i]==max3) continue;
            if(nums[i]>max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i]>max2){
                max3 = max2;
                max2 = nums[i];
            }
            else if(nums[i]>max3)
                max3 = nums[i];
        }
        return max3 == LONG_MIN ? max1 : max3;
    }
};
