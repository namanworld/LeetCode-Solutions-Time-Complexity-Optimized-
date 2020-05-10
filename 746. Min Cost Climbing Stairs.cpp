class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int f1 = 0, f2 = 0;
        for(int i=cost.size()-1; i>=0; i--){
            int temp = cost[i] + min(f1,f2);
            f2 = f1;
            f1 = temp;
        }
        return min(f1,f2);
    }
};
