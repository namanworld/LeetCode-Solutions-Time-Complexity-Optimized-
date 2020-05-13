#include <bits/stdc++.h>
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row = 0, col = 0, count = 0;
        for(int i=0; i<8; i++)
            for(int j=0; j<8; j++)
                if(board[i][j] == 'R'){
                    row = i;
                    col = j;
                    break;
                }
        
        for(int i=col+1; i<8; i++){
            if(board[row][i] == 'B') break;
            if(board[row][i] == 'p') {
                count++;
                break;
            }
        }
        for(int i=col-1; i>=0; i--){
            if(board[row][i] == 'B') break;
            if(board[row][i] == 'p') {
                count++;
                break;
            }
        }
        for(int i=row+1; i<8; i++){
            if(board[i][col] == 'B') break;
            if(board[i][col] == 'p') {
                count++;
                break;
            }
        }
        for(int i=row-1; i>=0; i--){
            if(board[i][col] == 'B') break;
            if(board[i][col] == 'p') {
                count++;
                break;
            }
        }
        return count;        
    }
};
