class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int numCols = grid[0].size(), numRows = grid.size();
        
        vector<vector<int>> shifted(numRows);
        for(int i=0; i<numRows; i++){
            vector<int> temp(numCols);
            shifted[i] = temp;
        }
        
        for(int row = 0; row<numRows ; row++){
            for(int col = 0; col<numCols ; col++){
                int newCol = (col + k)%numCols;
                int incr = (col + k)/numCols;
                int newRow = (row + incr)%numRows;
                shifted[newRow][newCol] = grid[row][col];
            }
        }
        return shifted;
        
    }
};
