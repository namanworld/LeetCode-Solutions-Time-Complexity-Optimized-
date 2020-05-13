class Solution {
public:
    #include <bits/stdc++.h>
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto res = max_element(candies.begin(), candies.end());
        int maxel = *res;
        vector<bool> ans;
        
        for(int i=0; i<candies.size(); i++){
            if(extraCandies+candies[i]>=maxel) ans.push_back(1);
            else ans.push_back(0);
        }
        
        return ans;
    }
};
