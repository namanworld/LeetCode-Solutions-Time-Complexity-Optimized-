#include <bits/stdc++.h>
class Solution {
public:
    vector<int> peopleIndexes(vector<vector<string>>& favoriteCompanies) {
        for(auto& comp:favoriteCompanies)
           sort(comp.begin(), comp.end());
        vector<int> res;
        for(int i=0; i<favoriteCompanies.size(); ++i){
            bool notSubset = true;
            for(int j=0; j<favoriteCompanies.size()&&notSubset; ++j){
                if(i==j) continue;
                notSubset = !includes(favoriteCompanies[j].begin(), favoriteCompanies[j].end(),
                                     favoriteCompanies[i].begin(), favoriteCompanies[i].end());
            }
            if(notSubset) res.push_back(i);
        }
        return res;
    }
};
