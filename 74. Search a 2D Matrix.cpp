class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0) return false;
        if(target < matrix[0][0] || target > matrix[matrix.size()-1][matrix[0].size()-1]) return false;
        int s = 0, e = matrix.size()-1;
        int mid = 0;
        while(s<=e){
            mid = (s+e)/2;
            if(matrix[mid][0] == target) return true;
            else if (matrix[mid][0] < target){
                if(mid+1!=matrix.size() && matrix[mid+1][0] > target) break;
                s = mid + 1;
            } 
            else e = mid - 1;
        }
        
        s = 0;
        e = matrix[mid].size()-1;
        cout<<mid;
        while (s<=e){
            int m = (s+e)/2;
            if(matrix[mid][m]==target) return true;
            else if(matrix[mid][m]>target) e =m-1;
            else s = m+1;
        }
        return false;        
    }
};
