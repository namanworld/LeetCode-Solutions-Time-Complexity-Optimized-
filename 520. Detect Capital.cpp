class Solution {
public:
    #include<bits/stdc++.h>
    bool detectCapitalUse(string word) {
        bool capital[word.size()];
        int i=0;
        for(auto x:word){
            if(islower(x)) capital[i++] = true;
            else capital[i++] = false;
        }
        
        if(word.size()>1){
            if(capital[0]==true && capital[1]==false) return false;
            bool curr = capital[1];
            for(int i=1; i<word.size(); i++){
                if(capital[i]!=curr) return false;
            }
            return true;
        }
        return true;
    }
};
