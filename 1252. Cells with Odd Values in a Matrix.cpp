class Solution {
public:
    #include <bits/stdc++.h>
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int A[n][m];
        memset(A, 0, sizeof(A));
        for(int i=0; i<indices.size(); i++){
            int row = indices[i][0];
            int col = indices[i][1];
            
            for(int j=0; j<m; j++){
                A[row][j]++;
            }
            for(int j=0; j<n; j++){
                A[j][col]++;
            }
        }
        
        int count = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(A[i][j]%2) count++;
        
        return count;
        
    }
};
