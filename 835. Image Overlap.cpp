class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        int n = A.size();
        int count[2*n+1][2*n+1];
        memset(count, 0, sizeof(count));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(A[i][j])
                    for(int i1=0;i1<n; i1++)
                        for(int j1=0; j1<n; j1++)
                            if(B[i1][j1])
                                count[i-i1+n][j-j1+n]+=1;
        
        int ans = 0;
        for(auto &x:count)
            for(int y:x)
                ans = max(y, ans);
        
        return ans;
                                
    }
};
