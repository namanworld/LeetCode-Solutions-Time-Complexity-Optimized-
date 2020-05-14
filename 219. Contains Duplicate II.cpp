#include <bits/stdc++.h>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()<=1 || k==0) return false;
        unordered_map<int, int> indices;
        for(int i=0; i<nums.size(); i++){
            if(indices.count(nums[i])>0) if(i-indices[nums[i]]<=k) return true;
            indices[nums[i]] = i;
        }
        return false;
    }
};
