class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int countNeg = 0;
        for(int i = 0; i<grid.size(); i++){
            int start = 0;
            int end = grid[i].size();
            while(start<end){
                int mid = (start+end)/2;
                if(grid[i][mid]<0){
                    end=mid;
                }
                else start=mid+1;
            }
            countNeg+=grid[i].size()-start;
        }
        return countNeg;
    }
};
