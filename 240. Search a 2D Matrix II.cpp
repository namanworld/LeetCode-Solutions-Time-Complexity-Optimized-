class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=1;
        for(auto &v: matrix){
            auto it = lower_bound(v.begin(), v.end(), target);
            if(it == v.end()) continue;
            if(*it == target) return true;
        }
        return false;
    }
};
