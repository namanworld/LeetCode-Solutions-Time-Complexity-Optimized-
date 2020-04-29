Runtime: 48 ms, faster than 5.66% of C++ online submissions for Lucky Numbers in a Matrix.
Memory Usage: 11.7 MB, less than 100.00% of C++ online submissions for Lucky Numbers in a Matrix.

class Solution {
public:
    #include <climits>
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> minEl;
        vector<int> maxEl;
        int min=INT_MAX,max=INT_MIN;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j]<min) min=matrix[i][j];
            }
            minEl.push_back(min);
            min=INT_MAX;
        }
        
        for(int i=0; i<matrix[0].size(); i++){
            for(int j=0; j<matrix.size(); j++){
                if(matrix[j][i]>max) max=matrix[j][i];
            }
            maxEl.push_back(max);
            max=INT_MIN;
        }
        vector<int> ans;
        for(int i=0; i<minEl.size(); i++){
            if(find(maxEl.begin(), maxEl.end(), minEl[i])!=maxEl.end()) ans.push_back(minEl[i]); 
        }
        return ans;
    }
};
