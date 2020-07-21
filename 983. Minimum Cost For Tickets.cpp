class Solution {
public:
    set<int> dayset;
    int memo[366];
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        for(int d: days) dayset.insert(d);
        return dp(1, costs, days);
    }
    
    int dp(int i, vector<int> &costs, vector<int> &days){
        if(i>365) return 0;
        if(memo[i]) return memo[i];
    
        int ans;
        if(dayset.find(i)!=dayset.end()){
            ans = min(dp(i+1, costs, days)+costs[0], dp(i+7, costs, days)+costs[1]);
            ans = min(ans, dp(i+30, costs, days) + costs[2]);
        }
        else ans = dp(i+1, costs, days);
        
        return memo[i] = ans;
    }
};
