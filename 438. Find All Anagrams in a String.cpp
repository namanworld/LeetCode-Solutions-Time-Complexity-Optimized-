class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length() == 0) return {};
        int alpha[26] = {0};
        for(auto &c:p){
            alpha[c-'a']++;
        }
        
        int left = 0, right = 0, count = p.length();
        vector<int> res;
        
        while(right < s.length()){
            if(alpha[s[right++]-'a']-->=1) count--;
            
            if(count == 0) res.push_back(left);
            
            if(right-left==p.length() && alpha[s[left++]-'a']++>=0) count++;
        }
        return res;
    }
};
