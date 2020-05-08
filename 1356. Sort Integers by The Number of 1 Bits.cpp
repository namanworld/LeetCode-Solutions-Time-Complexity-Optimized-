class Solution {
public:
    #include <bits/stdc++.h>
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int> > nos(33);
        for(int c:arr){
            int x = __builtin_popcount(c);
            nos[x].push_back(c);
        }
        vector<int> ans;
        for(int i=0; i<33; i++){
            sort(nos[i].begin(), nos[i].end());
            for(int j=0; j<nos[i].size(); j++){
                ans.push_back(nos[i][j]);
            }
        }        
        return ans;
    }
};
