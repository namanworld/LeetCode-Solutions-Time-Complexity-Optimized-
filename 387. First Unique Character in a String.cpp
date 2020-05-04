class Solution {
public:
    int firstUniqChar(string s) {
        int alpha[26]={0};
        for(auto x:s){
            alpha[x-'a']++;
        }
        for(int i=0; i<s.size(); i++){
            if(alpha[s[i]-'a']==1) return i; 
        }
        return -1;
    }
};
