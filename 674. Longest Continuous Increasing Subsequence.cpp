class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int j = 0, res = 0;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i-1]>=nums[i]) j = i;
            res = max(res, i - j + 1);
        }
        return res;
    }
};
