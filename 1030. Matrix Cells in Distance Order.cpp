class Solution {
public:
    #include <bits/stdc++.h>
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int> > result;
        map<int, vector<pair<int,int> > > d;
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
                d[abs(i-r0) + abs(j-c0)].push_back({i,j});
        
        for(auto it=d.begin(); it!=d.end(); it++){
            for(auto y:it->second){
                result.push_back({y.first, y.second});
            }
        }
        return result;        
    }
};
