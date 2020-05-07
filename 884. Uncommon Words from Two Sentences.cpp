class Solution {
public:
    #include <bits/stdc++.h>
    vector<string> uncommonFromSentences(string A, string B) {
        A+=' ' + B;
        stringstream split(A);
        string word="";
        unordered_map<string, int> uncommon;
        vector<string> ans;
        while(split>>word){
            uncommon[word]++;
        }
        for(auto it=uncommon.begin(); it!=uncommon.end(); it++){
            if(it->second == 1) ans.push_back(it->first);
        }
        return ans;
    }
};
