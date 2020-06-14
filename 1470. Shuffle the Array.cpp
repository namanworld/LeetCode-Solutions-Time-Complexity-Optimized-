class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp(nums);
        int k= 0;
        for(int i=0; i<n; i++){
            if((k&1)==0){
                nums[k++] = temp[i];
            }
            if((k&1)==1){
                nums[k++] = temp[i+n];
            }
        }
        return nums;
    }
};
