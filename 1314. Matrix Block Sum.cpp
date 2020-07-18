class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int> > dp(n+1, vector<int>(m+1, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                dp[i+1][j+1] = dp[i+1][j] + dp[i][j+1] - dp[i][j] +mat[i][j];
            }
        }
        
        vector<vector<int>> res(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int r1 = max(0, i-K), c1 = max(0, j-K), r2 = min(n, i+K+1), c2 = min(m, j+K+1);
                res[i][j] = dp[r1][c1] + dp[r2][c2] - dp[r1][c2] - dp[r2][c1];
            }
        }
        
        return res;
    }
};
