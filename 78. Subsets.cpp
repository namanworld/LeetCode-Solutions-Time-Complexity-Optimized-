class Solution {
public:
    vector<vector<int>> res;
    
    void helper(vector<int> &nums, int i){
        if(i == nums.size()) {
            res.push_back({});
            return;
        }
        
        helper(nums, i+1);
        
        vector<vector<int>> curr;
        
        for(auto v: res){
            vector<int> temp(v);
            temp.push_back(nums[i]);
            curr.push_back(temp);
        }
        
        for(auto v: curr){
            res.push_back(v);
        }
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size() == 0) return {};
        
        helper(nums, 0);
        return res;
    }
};
