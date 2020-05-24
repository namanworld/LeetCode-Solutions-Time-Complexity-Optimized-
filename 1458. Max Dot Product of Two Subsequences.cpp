class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        int res[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res[i][j] = nums1[i]*nums2[j];
                if(i&&j) res[i][j]+=max(res[i-1][j-1], 0);
                if(i) res[i][j] = max(res[i][j], res[i-1][j]);
                if(j) res[i][j] = max(res[i][j], res[i][j-1]);
            }
        }
        return res[m-1][n-1];
    }
};
