SORTING O(NlogN) time and O(logN) space:
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return 0;
        sort(nums.begin(), nums.end());
        
        return max(nums[n-1]*nums[n-2]*nums[n-3], nums[0]*nums[1]*nums[n-1]);
    }
};


BETTER O(N) time and O(1) space:
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        if(n<=2) return 0;
        int min1 = INT_MAX, min2 = INT_MAX, max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        
        for(int c:nums){
            if(c<=min1){
                min2 = min1;
                min1 = c;
            }
            else if(c<=min2){
                min2 = c;
            }
            if(c>=max1){
                max3 = max2;
                max2 = max1;
                max1 = c;
            }
            else if(c>=max2){
                max3 = max2;
                max2 = c;
            }
            else if(c>=max3) max3 = c;
            
        }
        return max(min1*min2*max1, max1*max2*max3);
    }
};
