class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xora = nums[0];
        for(int i=1; i<nums.size(); i++){
            xora = xora ^ nums[i];
        }
        
        int xorb = 1;
        for(int i=2; i<=nums.size();i++){
            xorb = xorb ^ i;
        }
        return xora ^ xorb;
    }
};
