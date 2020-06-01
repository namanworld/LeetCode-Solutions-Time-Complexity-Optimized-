class Solution {
public:
    #include <bits/stdc++.h>
    
    vector<string> letterCasePermutation(string S) {
        if(S.size()==0) return {""};
        vector<string> ans = letterCasePermutation(S.substr(1));
        
        int index = 0;
        if(isalpha(S[index])){
            
            if(islower(S[index])){
                int i=0; 
                int x = ans.size();
                for(;i<x; i++){
                    ans.push_back(S[index]+ans[i]);
                }
                char c = S[index]-32;
                
                for(i=0; i<x; i++){
                    ans[i] = (c+ans[i]);
                }
            }
            else if(isupper(S[index])){
                int i=0; 
                int x = ans.size();
                for(;i<x; i++){
                    ans.push_back(S[index]+ans[i]);
                }
                char c = S[index]+32;
                
                for(i=0; i<x; i++){
                    ans[i] = (c+ans[i]);
                }
            }
        }
        else{
            for(int i=0; i<ans.size(); i++){
                ans[i] = S[index]+ans[i];
            }
        }
        return ans;
    }
};
