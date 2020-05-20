class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minx = m, miny = n;
        for(auto &x:ops){
            minx = min(minx, x[0]);
            miny = min(miny, x[1]);
        }
        return minx*miny;
    }
};
