class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            minVal = min(minVal, nums[i]);
        }
        
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            count+=nums[i]-minVal;
        }
        return count;
    }
};


class Solution {
public:
    int minMoves(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0l)-nums.size()*(*min_element(nums.begin(),nums.end()));
    }
};
