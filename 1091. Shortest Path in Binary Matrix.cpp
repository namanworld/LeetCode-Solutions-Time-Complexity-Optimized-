class Solution {
public:
    int dir[8][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1}};
    
    int bfs(vector<vector<int>>& grid, int n){
        bool ** vis = new bool*[n];
        for(int i=0; i<n; i++) vis[i] = new bool[n]();
        
        queue<pair<int, int> > q;
        int res = 0;
        q.push({0, 0});
        vis[0][0] = true;
        
        while(!q.empty()){
            int sz = q.size();
            res++;
            cout<<sz<<endl;
            while(sz--){
                auto curr = q.front();
                q.pop();
                int r = curr.first, c = curr.second;
                if(r == n-1 && c == n-1) return res;
                for(int k=0; k<8; k++){
                    int nr = r + dir[k][0];
                    int nc = c + dir[k][1];
                    
                    if(nr>=0 && nc>=0 && nr<n && nc<n && !grid[nr][nc] && !vis[nr][nc]){
                        q.push({nr, nc});
                        vis[nr][nc] = true;
                    }
                }
            }
        }
        
        return -1;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       int n = grid.size();
        if(n == 1 && grid[0][0]==0) return 1;
        else if(n == 1 && grid[0][0]) return -1;
        
        if(grid[0][0] || grid[n-1][n-1]) return -1;
        
        return bfs(grid, n);
    }
};
