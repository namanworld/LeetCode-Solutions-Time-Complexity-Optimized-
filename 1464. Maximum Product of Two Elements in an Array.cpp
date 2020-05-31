#include <bits/stdc++.h>
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        sort(nums.begin(), nums.end());
        return max(--nums[0]*--nums[1], --nums[n-2]*--nums[n-1]);
    }
};
