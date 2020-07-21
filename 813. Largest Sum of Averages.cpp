class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
        int n = A.size();
        double P[n+1];
        for(int i=0; i<n; i++) P[i+1] = P[i] + A[i];
        
        double dp[n];
        for(int i=0; i<n; i++){
            dp[i] = (P[n]-P[i])/(n-i);
        }
        
        for(int k=0; k<K-1; k++){
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    dp[i] = max(dp[i], (P[j]-P[i])/(j-i) + dp[j]);
                }
            }
        }
        
        return dp[0];
    }
};
