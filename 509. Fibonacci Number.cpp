Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
Memory Usage: 5.9 MB, less than 100.00% of C++ online submissions for Fibonacci Number.

class Solution {
public:
    int fib(int n) {
        
        if(n<=1) return n;
        
        long long dp[n+1];
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2; i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
