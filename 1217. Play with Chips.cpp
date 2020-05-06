class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int even = 0;
        for(int i=0; i<chips.size(); i++){
            if(!(chips[i]%2==0)) even++;
        }
        return min(even, int(chips.size()) - even);
    }
};
