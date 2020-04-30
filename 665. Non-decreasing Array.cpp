class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size()<=1) return true;        
        bool modified = false;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                if(modified) return false;
                modified = true;
                if(i==0||nums[i+1]>=nums[i-1]) nums[i]=nums[i+1];
                else nums[i+1]=nums[i];
            }
        }
        return true;
    }
};
