Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Value to Get Positive Step by Step Sum.
Memory Usage: 7.6 MB, less than 100.00% of C++ online submissions for Minimum Value to Get Positive Step by Step Sum.

class Solution {
public:
    #include <climits>
    int minStartValue(vector<int>& nums) {
        int prefixSum = INT_MAX;
        
        int currSum=0;
        for(int i=0; i<nums.size(); i++){
            currSum+=nums[i];
            if(currSum<prefixSum){
                prefixSum = currSum;
            }
        }
        if(prefixSum<0) return -1*prefixSum + 1;
        else return 1;
    }
};
