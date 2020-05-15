#include <bits/stdc++.h>
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int m = matrix.size(), n = matrix[0].size();
        int dp[m][n];
        memset(dp, 0, sizeof(dp));
        
        int count = 0;
        for(int i=0; i<m; i++) {
            dp[i][0] = matrix[i][0];
            count+=dp[i][0];
        }
        for(int i=1; i<n; i++) {
            dp[0][i] = matrix[0][i];
            count+=dp[0][i];
        }
        
        for(int i=1; i<m; i++)
            for(int j=1; j<n; j++){
                if(matrix[i][j]==1) {
                    dp[i][j] = min(dp[i-1][j],dp[i][j-1]) == dp[i-1][j-1] ? 1 + dp[i-1][j-1] : 
                    min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1;
                    count+=dp[i][j];
                }
                else dp[i][j] = 0;
            }
        return count;
    }
};
