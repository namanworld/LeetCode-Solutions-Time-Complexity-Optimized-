class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        if(nums.size()==0 ) return {};
        
        sort(nums.begin(), nums.end());
        bt(0, {}, nums);
        return res;
    }
    
    void bt(int start, vector<int> temp, vector<int> &nums){
        res.push_back(temp);
        
        for(int i=start; i<nums.size(); ++i){
            if(i>start && nums[i-1]==nums[i]) continue;
            temp.push_back(nums[i]);
            bt(i+1, temp, nums);
            temp.pop_back();
        }
    }
};
