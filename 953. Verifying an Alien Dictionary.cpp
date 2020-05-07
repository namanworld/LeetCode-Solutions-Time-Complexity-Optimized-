class Solution {
public:
    #include<bits/stdc++.h>
    bool isAlienSorted(vector<string>& words, string order) {
        int alpha[26] ={0};
        for(int i = 0; i<order.size(); i++){
            alpha[order[i]-'a'] = i; 
        }
        
        for(int i=0; i<words.size()-1; i++){
            
            string s = words[i];
            string t = words[i+1];
            bool good = false;
            for(int j=0; j<min(s.size(), t.size()); j++){
                if(s[j]!=t[j]){
                    if(alpha[s[j]-'a'] > alpha[t[j]-'a']) return false;
                    else {
                        good = true;
                        break;
                    }
                }
            }
            if(good) continue;
            if(s.size()>t.size()) return false;            
        }
        return true;
    }
};
