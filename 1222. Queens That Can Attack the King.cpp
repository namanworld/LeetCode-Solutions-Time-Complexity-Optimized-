#include <bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int> > res;
        
        if(queens.size()==0||king.size()==0) return {};
        int dir[8][2] = {{-1,0},{-1,-1},{0,-1},{1,-1}, {1,0},{1,1},{0,1},{-1,1}};
        
        for(int i=0; i<8; i++){
            int currX = king[0] + dir[i][0];
            int currY = king[1] + dir[i][1];
            
            while(currX<8&&currX>=0&&currY<8&&currY>=0){
                vector<int> temp = {currX, currY};
                if(find(queens.begin(), queens.end(), temp)!=queens.end()){
                    res.push_back(temp);
                    break;
                }
                currX+=dir[i][0];
                currY+=dir[i][1];
            }
            
        }
        return res;
        
    }
};
