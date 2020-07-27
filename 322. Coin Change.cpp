class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(coins.size()==0 || amount == 0) return 0;
        
        int * dp = new int[amount+1];
        for(int i=0; i<=amount; i++) dp[i] = amount+1;
        dp[0] = 0;
        
        for(int i=0; i<coins.size(); ++i){
            for(int j = coins[i]; j<=amount; j++){
                dp[j] = min(dp[j], dp[j-coins[i]]+1);
            }
        }
        
        return dp[amount]==amount+1 ? -1 : dp[amount];
    }
};
