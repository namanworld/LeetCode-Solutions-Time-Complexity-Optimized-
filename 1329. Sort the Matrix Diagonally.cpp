#include <bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        map<int , vector<int>> diagonals;
        for(int i=0;i<mat.size(); i++)
            for(int j=0; j<mat[0].size(); j++){
                if(diagonals.count(j-i)==0){
                    vector<int> temp;
                    diagonals[j-i] = temp;
                }
                diagonals[j-i].push_back(mat[i][j]);
            }
        
        for(auto it=diagonals.begin(); it!=diagonals.end(); it++){
            sort((it->second).begin(), (it->second).end());
        }
        for(int i=0; i<mat.size(); i++)
            for(int j=0; j<mat[0].size(); j++){
                mat[i][j] = diagonals[j-i][0];
                diagonals[j-i].erase(diagonals[j-i].begin());
            }
        return mat;
    }
};
