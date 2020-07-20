class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> pp;
        for(string &s: strs){
            vector<int> alpha(26, 0);
            for(char &c: s){
                alpha[c-'a']++;
            }
            pp[alpha].push_back(s);
        }
        vector<vector<string>> res;
        for(auto it = pp.begin(); it!=pp.end(); it++){
            res.push_back(it->second);
        }
        
        return res;
    }
};
