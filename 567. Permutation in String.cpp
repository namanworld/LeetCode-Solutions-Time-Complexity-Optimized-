class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.length()==0) return false;
        
        int alpha[26]={0};
        for(char &c:s1){
            alpha[c-'a']++;
        }
        
        int left = 0, right = 0, count = s1.length();
        while(right<s2.length()){
            if(alpha[s2[right++]-'a']-->=1) count--;
            if(count == 0) return true;
            if(right-left==s1.length() && alpha[s2[left++]-'a']++>=0) count++;
        }
        return false;
    }
};
