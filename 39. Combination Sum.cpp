class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> v;
        sum(candidates,v,target,res,0);
        return res;
    }
    
    void sum(vector<int>&candidates, vector<int> v, int target, vector<vector<int>>& res, int pos){
        if(target==0) {
            res.push_back(v);
            return;
        }
        
        for(int i=pos; i<candidates.size(); i++){
            if(target-candidates[0]<0) return;
            v.push_back(candidates[i]);
            sum(candidates, v, target-candidates[i],res,i);
            v.pop_back();
        }
    }
};
