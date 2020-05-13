class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currDist = 0;
        int s = 0, e = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                if(e-s > currDist) currDist = e-s;
                s = i+1;
                e = i+1;
            }
            else if(nums[i]==1){
                e++;
            }
        }
        return max(currDist, e-s);
    }
};
