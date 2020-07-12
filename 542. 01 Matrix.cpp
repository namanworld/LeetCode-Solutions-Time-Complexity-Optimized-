class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix.size(), vector<int>(matrix[0].size(), INT_MAX));
        
        queue<pair<int, int>> q;
        
        for(int i=0; i<matrix.size(); ++i){
            for(int j=0; j<matrix[0].size(); ++j){
                if(!matrix[i][j]) {
                    res[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        int dir[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
        
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            
            for(int k=0; k<4; ++k){
                int r = p.first + dir[k][0];
                int c = p.second + dir[k][1];
                
                if(r>=0 && r<matrix.size() && c>=0 && c<matrix[0].size()){
                    if(res[r][c] > res[p.first][p.second] + 1){
                        res[r][c] = res[p.first][p.second] + 1;
                        q.push({r, c});
                    }
                }
            }
        }
        
        return res;
        
    }
};
