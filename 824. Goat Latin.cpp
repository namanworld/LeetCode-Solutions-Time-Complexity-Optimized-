#include <bits/stdc++.h>
class Solution {
public:
    string toGoatLatin(string S) {
        istringstream split(S);
        vector<string> res;
        string x;
        while(split>>x){
            res.push_back(x);
        }
        
        set<char> v={'a','e','i','o','u','A','E','I','O','U'};
        
        string y = "a";
        for(auto &x:res){
            if(v.find(x[0])!=v.end()){
                x = x+"ma";
            }
            else{
                x = x.substr(1) + x[0] + "ma";
            }
            x+=y;
            y+="a";
        }
        string ans="";
        for(auto x:res){
            ans = ans + x + " ";
        }
        return ans.substr(0, ans.size()-1);
    }
};
