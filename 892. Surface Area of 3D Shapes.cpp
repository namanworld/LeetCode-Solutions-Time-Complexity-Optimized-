class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int A[4][2] = {{0,1}, {1,0}, {0,-1}, {-1, 0}};   
        int n = grid.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]>0){
                    ans+=2;
                    for(int k=0; k<4; k++){
                        int newX = i+A[k][0];
                        int newY = j+A[k][1];
                        int nv = 0;
                        if(newX >=0 && newX < n && newY >= 0 && newY < n){
                            nv = grid[newX][newY];
                        }
                        ans+=max(grid[i][j] - nv, 0);
                    }
                }
            }
        }
        return ans;
    }
};
