class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string final = "";
        bool ans = true;
        for(int i=0; i<strs[0].size(); i++){
            string toCheck = strs[0].substr(0,i+1);
            for(int j=0; j<strs.size(); j++){
                if(strs[j].substr(0,i+1).find(toCheck)!=string::npos){
                    continue;
                }
                else{
                    ans = false;
                    break;
                }
            }
            if(!ans) break;
            final = toCheck;
        }
        return final;
    }
};


BETTER APPROACH
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.size() == 0) return "";
        
        string s = strs[0];
        int j = 0, i = 0;
        string ans;
        
        while (j < s.length()) {
            int flag = false;
            for (i = 1; i < strs.size(); i++) {
                if (j > strs[i].length() || s[j] != strs[i][j]) {
                    flag = true;
                    break;
                }
            }
            
            if (!flag)
                ans += s[j];
            else
                break;
            j++;
        }
        
        return ans;
    }
};

BETTER:
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        
        string res = strs[0];
        for(int i=1; i<strs.size(); ++i){
            int j;
            for(j=0; j<strs[i].size() && j<res.size(); ++j) if(strs[i][j]!=res[j]) break;
            res = res.substr(0, j);
        }
        return res;
    }
};
