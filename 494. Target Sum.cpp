class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int dp[nums.size()][2001];
        for(int i=0; i<nums.size(); ++i){
            for(int j=0; j<2001; j++) dp[i][j] = INT_MIN;
        }
        return func(nums, 0, 0, S, dp);
    }
    
    int func(vector<int> &nums, int i, int sum, int S, int dp[][2001]){
        if(i==nums.size()) return sum == S ? 1 : 0;
        else if (dp[i][sum+1000]!=INT_MIN) return dp[i][sum+1000];
        else return dp[i][sum+1000] = func(nums, i+1, sum-nums[i], S, dp) + func(nums, i+1, sum+nums[i], S, dp);
    }
};
