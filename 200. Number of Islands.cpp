#include <bits/stdc++.h>
class Solution {
public:
    bool valid(int i, int j, int r, int c){
        return i>=0 && j>=0 && i<r && j<c;
    }
    
    void islands(vector<vector<char>>& grid,int i,int j, bool ** visited){
        visited[i][j] = true;
        
        int dir[4][2] = {{0,-1}, {-1, 0}, {0, 1}, {1, 0}};
        
        for(int k=0; k<4; k++){
            int newR = i+dir[k][0];
            int newC = j+dir[k][1];
            
            if(valid(newR, newC, grid.size(), grid[0].size()) && grid[newR][newC] == '1' && !visited[newR][newC])
                islands(grid, newR, newC, visited);
            
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        bool ** visited = new bool *[grid.size()];
        for(int i=0; i<grid.size(); i++){
            visited[i] = new bool[grid[0].size()];
            for(int j=0; j<grid[0].size(); ++j) visited[i][j] = false;
        }
        
        
        int count = 0;
        for(int i=0; i<grid.size(); i++)
            for(int j=0; j<grid[0].size(); ++j){
                if(grid[i][j] == '1' && !visited[i][j]){
                    islands(grid,i, j, visited);
                    count++;
                }
            }
        return count;
    }
};
