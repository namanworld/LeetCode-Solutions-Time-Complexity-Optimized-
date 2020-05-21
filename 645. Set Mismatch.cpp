class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            if(nums[abs(nums[i])-1]<0) {
                res.push_back(abs(nums[i]));
            }
            else nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
        }   
        for(int i=0; i<nums.size(); i++) if(nums[i]>0) res.push_back(i+1);
        return res;
    }
};
