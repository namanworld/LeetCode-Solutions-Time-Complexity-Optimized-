#include <bits/stdc++.h>
class Solution {
public:
    string arrangeWords(string text) {
        stringstream x(text);
        string word;
        
        map<int, string> t;
        
        while(x>>word){
                t[word.size()] += word + " ";
        }
        
        string res = "";
        for(auto it = t.begin(); it!=t.end(); it++){
            res+=it->second;
        }
        
        res[0] = toupper(res[0]);
        for(int i=1; i<res.size(); i++) res[i] = tolower(res[i]);\
        
        
        return res.substr(0, res.size()-1);
    }
};
