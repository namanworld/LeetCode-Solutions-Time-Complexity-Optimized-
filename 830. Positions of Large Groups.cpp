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

BETTER:
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        if(S.size()<=2) return {};
        vector<vector<int>> res;
        for(int i=0, j=0; i<S.size(); i++){
            if(i==S.size()-1 || S[i]!=S[i+1]){
                if(i-j+1>=3) res.push_back({j,i});
                j = i+1;
            }
        }
        
        return res;
    }
};
