class Solution {
public:
    #include <bits/stdc++.h>
    
    bool compare(pair<int, int> p, pair<int, int> q){
        if(p.second!=q.second) return p.second<q.second;
        else{
            return p.first<q.first;
        }
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int> > v;
        for(int i=0; i<mat.size(); i++){
            int count = 0;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==0){
                    break;
                }
                count++;
            }
            v.push_back({i, count});
        }
        
        sort(v.begin(), v.end(), [this] (pair<int, int> a, pair<int,int> b) {
        return compare(a, b); });
        
        vector<int> ans;
        for(int i=0; i<k;i++){
            ans.emplace_back(v[i].first);
        }
        return ans;
    }
};
