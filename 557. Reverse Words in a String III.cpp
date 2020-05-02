#include <bits/stdc++.h>
class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        istringstream split(s);
        string output = "";
        
        do{
            string x;
            split>>x;
            reverse(x.begin(), x.end());
            output+=x;
            output+=" ";
        }
        while(split);
        string ans="";
        for(int i=0; i<len; i++){
            ans+=output[i];
        }
        return ans;
    }
};
