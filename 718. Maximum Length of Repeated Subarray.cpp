class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int ans = 0;
        int dp[A.size()+1][B.size()+1];
        memset(dp, 0, sizeof(dp));
        for(int i=A.size()-1; i>=0; i--){
            for(int j=B.size()-1; j>=0; j--){
                if(A[i]==B[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        
        return ans;
    }
};
