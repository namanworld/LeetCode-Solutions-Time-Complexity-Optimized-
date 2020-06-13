class Solution {
public:
    vector<int> suf;
    int dp[105][200];
    int solve(vector<int>& piles, int i, int m){
        if(i>=piles.size()) return 0;
        
        if(i+2*m>=piles.size()) return suf[i];
        
        if(dp[i][m]!=-1) return dp[i][m];
        
        int ans = 0;
        for( int k = 0; k < 2*m; k++ ){
            ans = max(ans,suf[i]-solve(piles,i+k+1,max(m,k+1)));
        }
        return dp[i][m] = ans;
    }
    
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        suf.resize(n+2);
        suf[n-1] = piles[n-1];
        for(int i=n-2; i>=0; i--){
            suf[i] = piles[i]+suf[i+1];
        }
        memset(dp, -1, sizeof(dp));
        return solve(piles, 0, 1);
    }
};
