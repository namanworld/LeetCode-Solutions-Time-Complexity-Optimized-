class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return -1;
        int m = grid.size(), n = grid[0].size();
        
        if(m == 1 && n == 1 && (grid[0][0] == 0 || grid[0][0] == 2)) return 0;
        
        int dir[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
        
        queue<pair<int, int>> q;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 2) q.push({i, j});
            }
        }
        
        if(q.size() == 0) return -1;
        if(q.size() == m*n) return 0;
        
        int time = 0;
        while(!q.empty()){
            time++;
            int size = q.size();
            while(size--){
                auto p = q.front();
                q.pop();
                
                for(int k=0; k<4; k++){
                    int i = p.first + dir[k][0];
                    int j = p.second + dir[k][1];
                    
                    if(i>=0 && i<m && j>=0 && j<n && grid[i][j] == 1){
                        grid[i][j] = 2;
                        q.push({i, j});
                    }
                }
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1) return -1;
            }
        }
        
        return time-1;
    }
};
