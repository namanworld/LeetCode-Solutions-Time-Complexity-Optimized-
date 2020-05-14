class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }
};

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size();
        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[mid]>=target) e = mid;
            else s = mid+1;
        }
        return s;
    }
};
