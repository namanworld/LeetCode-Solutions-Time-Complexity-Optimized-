class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        if(k==0) return true;
        int initial = INT_MIN;
        for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            if(initial!=INT_MIN && i-initial <= k) {
                    return false;
            }
            else{
                initial = i;
            }
        }
    }
    return true;
    }
};
