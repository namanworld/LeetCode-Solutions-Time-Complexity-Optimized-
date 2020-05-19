BRUTE FORCE:
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0) return {};
        
        vector<vector<int>> res(n,vector<int>(n,0));
        
        int ru = 0, rd = n-1, cl = 0, cr = n-1;
        
        int i = 1;
        while(i<=n*n){
            for(int j=cl; j<=cr; j++){
                res[ru][j] = i++;
            }
            ru++;
            for(int j=ru;j<=rd; j++){
                res[j][cr] = i++;
            }
            cr--;
            for(int j=cr;j>=cl; j--){
                res[rd][j] = i++;
            }
            rd--;
            for(int j=rd;j>=ru; j--){
                res[j][cl] = i++;
            }
            cl++;
        }
        return res;
    }
};

BETTER:
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if(n==0) return {};
        
        vector<vector<int>> res(n,vector<int>(n,0));
        
        int k=1,i=0;
        while(k<=n*n){
            int j=i;
            while(j<n-i) res[i][j++] = k++;
            j=i+1;
            while(j<n-i) res[j++][n-i-1] = k++;
            j=n-i-2;
            while(j>i) res[n-i-1][j--] = k++;
            j=n-i-1;
            while(j>i) res[j--][i] = k++;
            i++;
        }
        return res;
    }
};
