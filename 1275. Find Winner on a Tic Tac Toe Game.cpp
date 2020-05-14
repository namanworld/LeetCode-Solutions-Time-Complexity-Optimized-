#include <bits/stdc++.h>
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char> > board(3, vector<char>(3,'0'));
        
        for(int i=0; i<moves.size(); i++){
            if(i%2==0) board[moves[i][0]][moves[i][1]]='A';
            else board[moves[i][0]][moves[i][1]]='B';
        }
        
        for(int i=0; i<3; i++){
            if(board[i][0]!='0' && board[i][0]==board[i][1] && board[i][1]==board[i][2]){
                return {board[i][0]};
            }
            if(board[0][i]!='0' && board[0][i]==board[1][i] && board[1][i]==board[2][i]){
                return {board[0][i]};
            }
        }    
        
        if(board[0][0]!='0' && board[0][0]==board[1][1] && board[1][1]==board[2][2]){
                return {board[0][0]};
            }
        if(board[0][2]!='0' && board[0][2]==board[1][1] && board[1][1]==board[2][0]){
            return {board[0][2]};
        }
        
        if(moves.size()!=9) return "Pending";        
        return "Draw";
    }
};
