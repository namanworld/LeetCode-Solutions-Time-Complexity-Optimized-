class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return int(nums.size());
        int j = 0, count = 1;
        for(int i=0; i<nums.size(); i++){
            if(i<nums.size()-1 && nums[i+1] == nums[i]){
                count++;
            }
            else{       
                if(i==nums.size()-1 && nums[i] == nums[i-1]) count++;
                nums[j++] = nums[i];
                if(count>=2) nums[j++] = nums[i];
                count = 1;
            }            
        }
        
        return j;
    }
};
