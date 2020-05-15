class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        if(S.size()<=2) return {};
        int count = 1;
        int curr = 0;
        vector<vector<int>> res;
        for(int i=1; i<S.size(); i++){
            if(S[i]!=S[i-1]){
                if(count>=3) {
                    res.push_back({curr, i-1});
                    curr = i;
                }
                count = 0;
                curr = i;
            }
            count++;
        }
        
        if(count>=3){
            res.push_back({curr,int(S.size()-1)});
        }
        
        return res;
    }
};
