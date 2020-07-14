class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, "", 0, 0, n);
        return res;
    }
    
    void backtrack(vector<string> &res, string curr, int cl, int op, int n){
        if(curr.length() == 2*n){
            res.push_back(curr);
            return;
        }
        
        if(op < n) backtrack(res, curr+'(', cl, op+1, n);
        if(op > cl) backtrack(res, curr+')', cl+1, op, n);
    }
};
