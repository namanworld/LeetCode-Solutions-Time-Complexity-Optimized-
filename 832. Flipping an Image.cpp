Runtime: 4 ms, faster than 100.00% of C++ online submissions for Flipping an Image.
Memory Usage: 9 MB, less than 100.00% of C++ online submissions for Flipping an Image

class Solution {
public:
    #include <bits/stdc++.h>
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); i++){
            reverse(A[i].begin(), A[i].end());
            for(int j=0; j<A[i].size(); j++){
                if(A[i][j]==1) A[i][j]=0;
                else A[i][j]=1;
            }
        }
        return A;
    }
};
