#include <bits/stdc++.h>
class Solution {
public:
    int arr[4][2] = {{-1,0}, {0,-1}, {1,0}, {0, 1}};
    
    bool valid(int i, int j, vector<vector<int>>& grid){
        return i>=0 && i<grid.size() && j>=0 && j<grid[0].size();
    }
    
    int area(vector<vector<int>>& grid, int i, int j, bool **visited){
        visited[i][j] = true;
        int currArea = 1;
        
        for(int k=0; k<4; k++){
            int newX = i + arr[k][0];
            int newY = j + arr[k][1];
            
            if(valid(newX, newY, grid) && grid[newX][newY] == 1 && !visited[newX][newY]){
                currArea+=area(grid, newX, newY, visited);
            }
        }
        return currArea;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int m = grid.size(), n = grid[0].size();
        
        bool ** visited = new bool*[m];
        for(int i=0; i<m; i++){
            visited[i] = new bool[n];
            for(int j=0; j<n; j++) visited[i][j] = false;
        }
        
        int maxArea = 0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(grid[i][j]==1 && visited[i][j]==false){
                    int currArea = area(grid, i, j, visited);
                    maxArea = max(maxArea, currArea);
                }
            }
        return maxArea;
    }
};
