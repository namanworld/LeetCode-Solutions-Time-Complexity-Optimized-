class Solution {
public:
    #include<bits/stdc++.h>
    string removeOuterParentheses(string S) {
        stack<char> outer;
        string res="";
        for(int i=0; i<S.size(); i++){
            if(!outer.empty()){
                if (!(outer.size()==1 && S[i]==')')) res+=S[i];   
            }
            if(S[i]=='(' ) outer.push(S[i]);
            if(S[i]==')' && !outer.empty()) outer.pop();
        }
        return res;
    }
};
