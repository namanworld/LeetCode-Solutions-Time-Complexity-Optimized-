class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        if(nums.size()<=2) return false;
        int i = 0;
        while(i+1 < nums.size() && nums[i]<nums[i+1]){
            i++;
        }
        if(i==0||i==nums.size()-1) return false;
        
        while(i+1<nums.size() && nums[i]>nums[i+1]){
            i++;
        }
        return i==nums.size()-1;
    }
    
};
