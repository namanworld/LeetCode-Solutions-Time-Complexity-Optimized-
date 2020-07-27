class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int n = matrix.size(), m = matrix[0].size();
        

        int ** dp = new int * [n];
        for(int i=0; i<n; i++){
            dp[i] = new int[m]();
        }
        
        int maxAns = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == '1'){
                    int up = i-1>=0 ? dp[i-1][j] : 0;
                    int left = j-1>=0 ? dp[i][j-1] : 0;
                    int topleft = i-1>=0 && j-1>=0 ? dp[i-1][j-1] : 0;
                    
                    dp[i][j] = 1 + min(topleft, min(left, up));
                }
                else dp[i][j] = 0;
                maxAns = max(maxAns, dp[i][j]);
            }
        }
        
        return maxAns*maxAns;
    }
};
