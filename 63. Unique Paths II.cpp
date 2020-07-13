class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();        
        
        int dp[n][m];
        
        bool row = false;
        for(int i=0; i<n; i++) {
            if(arr[i][0]) row = true;
            if(!row) dp[i][0] = 1;
            if(row) dp[i][0] = 0;
        }
        
        bool col = false;
        for(int j=0; j<m; j++) {
            if(arr[0][j]) col = true;
            if(!col) dp[0][j] = 1;
            if(col) dp[0][j] = 0;
        }
        
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(arr[i][j])  {
                    dp[i][j] = 0;
                    continue;
                }
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                
            }
        }
        
        return arr[n-1][m-1]==0 && arr[0][0]==0 ? dp[n-1][m-1] : 0;
    }
};
