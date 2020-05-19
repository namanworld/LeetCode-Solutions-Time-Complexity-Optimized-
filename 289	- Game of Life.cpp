class Solution {
public:
    bool isLive(vector<vector<int>>& board, int i, int j){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) return false;
        return abs(board[i][j]) == 1;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=board[0].size();
        vector<int> temp(n);
        int dir[8][2] = {{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int countLive = 0;
                for(int k=0;k<8; ++k){
                    int newr = i + dir[k][0];
                    int newc = j + dir[k][1];
                    
                    if(isLive(board,newr,newc)) countLive++;
                }
                
                if(board[i][j] && (countLive<2||countLive>3)) board[i][j] = -1;
                else if(!board[i][j] && countLive == 3) board[i][j] = 2; 
                                
            }
        }
        
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++){
                if(board[i][j]>0) board[i][j] = 1;
                else board[i][j] = 0;
            }
    
                   
                   
    }
};


APPROACH 2:
class Solution {
public:
    bool isLive(vector<vector<int>>& board, int i, int j){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) return false;
        return board[i][j] == 1;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=board[0].size();
        vector<int> temp2(n,0);
        int dir[8][2] = {{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
        
        
        for(int i=0; i<=m; i++){
            vector<int> temp(n,0);
            for(int j=0; j<n&&i!=m; j++){
                int countLive = 0;
                for(int k=0;k<8; ++k){
                    int newr = i + dir[k][0];
                    int newc = j + dir[k][1];
                    
                    if(isLive(board,newr,newc)) {
                        countLive++;
                    }
                }
                
                if(board[i][j]){
                    if(countLive==2 || countLive==3) {
                        temp[j] = 1;
                    }
                    else temp[j] = 0;
                }
                else if(countLive == 3 && board[i][j]==0) {
                    temp[j] = 1; 
                }

            }
            if(i>0){
            for(int j=0;j<n;j++) board[i-1][j]=temp2[j];
            }
            temp2 = temp;   
        }
        
    }
};
