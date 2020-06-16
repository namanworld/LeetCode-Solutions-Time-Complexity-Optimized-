class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        vector<int> res;
        for(int i=0; i<costs.size(); ++i){
            sum+=costs[i][0];
            res.push_back(costs[i][1]-costs[i][0]);
        }
        
        sort(res.begin(), res.end());
        for(int i=0; i<costs.size()/2; i++){
            sum+=res[i];
        }        
        return sum;
    }
};
