class Solution {
public:
    #include <bits/stdc++.h>
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> map;
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i]!=nums[i-1]) map[nums[i]] = i;
        }
        map[nums[0]] = 0;
        for(int i=0; i<temp.size(); i++){
            temp[i] = map[temp[i]];
        }
        return temp;
        
    }
};
