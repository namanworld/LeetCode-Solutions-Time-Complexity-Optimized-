class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        if(n == 0) return true;
        
        set<string> all;
        all.insert(wordDict.begin(), wordDict.end());
        
        vector<bool> dp(n, false);
        vector<int> matchedIndex;
        matchedIndex.push_back(-1);
        
        for(int i=0; i<n; i++){
            int m = matchedIndex.size();
            bool found = false;
            for(int j = m-1; j>=0; j--){
                if(all.find(s.substr(matchedIndex[j]+1, i-matchedIndex[j])) != all.end()){
                    found = true;
                    break;
                }
            }
            
            if(found){
                dp[i] = true;
                matchedIndex.push_back(i);
            }
        }
        
        return dp[n-1];
    }
};
