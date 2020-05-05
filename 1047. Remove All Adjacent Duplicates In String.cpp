class Solution {
public:
    #include <bits/stdc++.h>
    string removeDuplicates(string S) {
        stack<char> s;
        for(auto c:S){
            if(s.empty() || (!s.empty()&&c!=s.top())) s.push(c);
            else if(c==s.top()) s.pop();
        }
        
        string res="";
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

BETTER APPROACH
class Solution {
public:
    string removeDuplicates(string S) {
        int pos = 0;
        for (int i = 1; i < S.size(); ++i) {
            if (pos >= 0 && S[i] == S[pos]) {
                --pos;
            } else {
                S[++pos] = S[i];
            }
        }
        return S.substr(0, pos + 1);
    }
};
