class Solution {
public:
    #include <bits/stdc++.h>
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        vector<int> ans(houses.size(), INT_MAX);
        
        for(int i=0, j=0; i<ans.size()&&j<heaters.size();){
            if(houses[i]<=heaters[j]){
                ans[i] = heaters[j]-houses[i];
                i++;
            }
            else j++;
        }
        
        for(int i=houses.size()-1, j=heaters.size()-1; i>=0 && j>=0;) {
            if(houses[i]>=heaters[j]){
                ans[i] = min(ans[i], houses[i]-heaters[j]);
                i--;
            }
            else j--;
        }
        
        int x = 0;
        for(int i=0; i<ans.size(); i++){
            x = max(x, ans[i]);
        }
        return x;
    }
};
