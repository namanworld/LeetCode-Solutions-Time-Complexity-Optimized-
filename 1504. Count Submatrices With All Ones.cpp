class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int> > arr(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            int c = 0;
            for(int j=m-1; j>=0; j--){
                if(mat[i][j]) c++;
                else c=0;
                arr[i][j] = c;
            }
        }
        
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int c = INT_MAX;
                for(int k=i; k<n; k++){
                    if(arr[k][j]<c){
                        c = arr[k][j];
                    }
                    count+=c;
                }
            }
        }
        return count;
    }
};
