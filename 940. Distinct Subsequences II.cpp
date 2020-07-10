class Solution {
public:
    int distinctSubseqII(string S) {
        int MOD = 1000000007;
        int n = s.length();
        int *dp = new int[n];
        dp[0] = 1;
        
        int *last = new int[26];
        memset(last, -1, sizeof(last));
        
        for(int i=0; i<n; i++){
            int x = s[i] - 'a';
            dp[i+1] = dp[i] * 2 % MOD;
            if(last[x] >= 0) dp[i+1] -= dp[last[x]];
            dp[i+1] %= MOD;
            last[x] = i;
        }
        
        dp[n]--;
        if(dp[n]<0) dp[n] += MOD;
        return dp[n];
    }
};
