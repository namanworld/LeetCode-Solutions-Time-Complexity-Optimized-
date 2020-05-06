class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int length = grid.size();
        int rowmax = 0;
        int result = length*length;
        for (int i = 0; i<length; i++){
            int leftmax = 0;
            int frontmax = 0;
            for (int j = 0; j<length; j++){
                if (grid[i][j] == 0){
                    result -= 1;
                }
                if (grid[i][j] > leftmax){
                    leftmax = grid[i][j];
                }
                if (grid[j][i] > frontmax){
                    frontmax = grid[j][i];
                }
            }
            result+=leftmax;
            result+=frontmax;
        }
        return result;
    }
};
