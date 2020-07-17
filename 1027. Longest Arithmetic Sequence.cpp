O(N^2) Solution:
class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n = A.size();
        if(n<=2) return n;
        
        vector<vector<int> > dp(n, vector<int>(20001, 1));
        int ans = 2;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                int diff = A[i] - A[j];
                dp[i][diff+10000] = max(dp[i][diff+10000], 1+dp[j][diff+10000]);
                ans = max(dp[i][diff+10000], ans);
            }
        }
        
        return ans;
    }
};

O(N^3) Solution: 
class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n = A.size();
        if(n<=2) return n;
        
        int ans = 2;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                int d = A[j] - A[i];
                int curr = A[j];
                int currLen = 2;
                for(int k = j+1; k<n; k++){
                    if(A[k]-curr == d){
                        currLen++;
                        curr = A[k];
                    }
                }
                ans = max(ans, currLen);
            }
        }
        
        return ans;
    }
};
