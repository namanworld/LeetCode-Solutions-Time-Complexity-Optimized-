BRUTE FORCE:
class Solution {
public:
    int server(vector<vector<int>> &A, int i, int j, bool **visited){
        if(i<0 || i>=A.size() || j<0 || j>=A[0].size()) return 0;
        int c = 1;
        visited[i][j] = true;
        
        for(int k=0; k<A.size(); k++)
            if(A[k][j]==1 && !visited[k][j]) c+=server(A, k, j, visited);
        for(int k=0; k<A[0].size(); k++)
            if(A[i][k]==1 && !visited[i][k]) c+=server(A, i, k, visited);
    
        return c;
    }
    
    int countServers(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int m = grid.size();
        int n = grid[0].size();
        bool ** visited = new bool *[m];
        for(int i=0; i<m; i++){
            visited[i] = new bool[n];
            for(int j=0; j<n; j++)
                visited[i][j] = false;
        }
        
        int count = 0;
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(grid[i][j]==1&&!visited[i][j]){
                    int x = server(grid, i, j, visited);
                    if(x>1) count+=x;
                }   
            }
        return count;
        }
};


BETTER :
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> row(m,0);
        vector<int> col(n,0);
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(grid[i][j]){
                    row[i]++;
                    col[j]++;
                }
            }
        
        int count = 0;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(grid[i][j] && (row[i]>1 || col[j]>1))
                    count++;
            }
        
        
        return count;
    }
};
