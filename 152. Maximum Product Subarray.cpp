class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        
        int max_so_far = nums[0];
        int min_so_far = nums[0];
        int res = max_so_far;
        
        for(int i=1; i<n; i++){
            int curr = nums[i];
            int temp_max = max(curr, max(max_so_far*curr, min_so_far*curr));
            min_so_far = min(curr, min(max_so_far*curr, min_so_far*curr));
            max_so_far = temp_max;
            res = max(res, max_so_far);
        }
        
        return res;
    }
};
