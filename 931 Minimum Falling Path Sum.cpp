class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        int dp[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0){
                    dp[i][j] = A[i][j];
                    continue;
                }
                else{
                    int l = (j-1>=0) ? dp[i-1][j-1] : INT_MAX;
                    int u = dp[i-1][j];
                    int r = (j+1<m) ? dp[i-1][j+1] : INT_MAX;
                    dp[i][j] = A[i][j] + min(u, min(l, r));
                }
            }
        }
        
        int ans = INT_MAX;
        for(int i=0; i<m; i++){
            ans = min(ans, dp[n-1][i]);
        }
        
        return ans;
    }
};
