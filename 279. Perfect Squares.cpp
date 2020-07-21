class Solution {
public:
    vector<int> memo;
    int numSquares(int n) {
        memo.assign(n+1, 0);
        memo[0] = 0;
        memo[1] = 1;
        dfs(n);
        return memo[n];
    }
    
    long long dfs(int n){
        
        if(n<0) return INT_MAX;
        if(n==0) return 0;
        if(memo[n]) return memo[n];
        
        long long ans = INT_MAX;
        for(int i=1; i*i <=n; i++){
            ans = min(ans, 1 + dfs(n-i*i));
        }
        
        return memo[n] = ans;   
    }
};
