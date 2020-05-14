class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return -1;
        if(n==1) return 0;
        int sumLeft[n];
        int sumRight[n];
        
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            sumLeft[i] = sum;
        }
        sum = 0;
        for(int i=nums.size()-1; i>=0; i--){
            sum+=nums[i];
            sumRight[i] = sum;
        }
            
        for(int i=0; i<nums.size(); i++){
            if(i==0 && sumRight[i+1]==0) return i;
            else if (i==n-1 && sumLeft[i-1]==0) return i;
            else if(i>0 && i<n-1 && sumLeft[i-1] == sumRight[i+1]) return i;
        }
        return -1;
    }
};


ALTERNATE:
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0;
        sum = accumulate(nums.begin(), nums.end(), sum);
        for(int i=0; i<nums.size(); i++){
            if(leftSum == sum - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
