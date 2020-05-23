class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));
        for(int i=1; i<=n; i++){
            for(int j=0; j+i<=n; j++){
                int k = j+i-1;
                int parity = (k+j+n)%2;
                if(parity == 1) dp[j+1][k+1] = max(piles[j]+dp[j+2][k+1], piles[k]+dp[j+1][k]);
                else dp[j+1][k+1] = min(-piles[j]+dp[j+2][k+1], -piles[k]+dp[j+1][k]);
            }
        }
        return dp[1][n]>0;
    }
};


class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
