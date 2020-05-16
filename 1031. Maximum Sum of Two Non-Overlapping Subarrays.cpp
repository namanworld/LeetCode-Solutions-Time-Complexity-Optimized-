class Solution {
public:
    int sum(vector<int>& A, int M, int i, int j){
        if(j-i+1<M) return 0;
        int currSum = 0, RSum = 0, count=0;
        for(i; count++<M ; i++){
            RSum+=A[i];
        }
        currSum = RSum;
        for(i; i<=j; i++){
            currSum += A[i]-A[i-M];
            RSum = max(RSum, currSum);
        }
        return RSum;
    }
    
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        int currSum = 0, LSum = 0, LIndex = 0;
        for(int i=0; i<L ; i++){
            LSum+=A[i];
        }
        int RSum = sum(A, M, L, int(A.size())-1);
        int posAns = LSum + RSum;
        currSum = LSum;
        for(int i=L; i<A.size(); i++){
            currSum += A[i]-A[i-L];
            LIndex = i-L+1;
            RSum = max(sum(A, M, 0, LIndex-1), sum(A, M, LIndex+L, int(A.size())-1));                
            posAns = max(posAns, currSum + RSum);
        }        
        
        return posAns;
    }
};

BETTER APPROACH:
class Solution {
public:

    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> res(A.size(), 0);
        for(int i=0; i<A.size(); ++i){
            res[i] = i==0?A[i]:A[i]+res[i-1];
        }
        
        int leftMax = INT_MIN, rightMax = INT_MIN, ans = INT_MIN;
        
        for(int i=L+M; i<=A.size(); i++){
            leftMax = max(leftMax, i==L+M?res[L-1]:res[i-M-1]-res[i-L-M-1]);
            rightMax = max(rightMax, i==L+M?res[M-1]:res[i-L-1]-res[i-L-M-1]);
            ans = max(ans, max(res[i-1]-res[i-L-1]+rightMax, res[i-1]-res[i-M-1]+leftMax));
        }
        return ans;
    }
};
