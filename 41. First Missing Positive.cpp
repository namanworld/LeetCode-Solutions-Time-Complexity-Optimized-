class Solution {
public:
    #include <unordered_map>
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size())
        {
            if(i+1==nums[i]||nums[i]<=0||nums[i]>nums.size())i++;
            else if(nums[i]!=nums[nums[i]-1])swap(nums[i],nums[nums[i]-1]);
            else i++;
        }
        i=0;
        while(i<nums.size()&&nums[i]==i+1)i++;
        return i+1;
    }
};
