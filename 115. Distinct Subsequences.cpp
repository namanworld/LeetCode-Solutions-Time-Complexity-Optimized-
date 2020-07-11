class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        
        if(n<m) return 0;
        else if(n==m && n==0) return 1;
        
        long long dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0 && j==0)
                    dp[i][j]=1;
                else if(i==0)
                    dp[i][j]=0;
                else if(j==0)
                    dp[i][j]=1;
                else if(s[i-1]==t[j-1])
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][m];
    }
};
