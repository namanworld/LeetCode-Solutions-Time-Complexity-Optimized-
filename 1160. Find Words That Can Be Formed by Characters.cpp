Runtime: 88 ms, faster than 57.48% of C++ online submissions for Find Words That Can Be Formed by Characters.
Memory Usage: 18 MB, less than 100.00% of C++ online submissions for Find Words That Can Be Formed by Characters.

class Solution {
public:
    #include <bits/stdc++.h>
    
    bool formed(string s, int map[]){
        int temp[26]={0};
        for(int i=0; i<s.size(); i++){
            int c = s[i] - 'a';
            temp[c]++;
        }
        
        for(int i=0; i<26; i++){
            if(temp[i]>map[i]) return false;
        }
        return true;        
    }
    
    int countCharacters(vector<string>& words, string chars) {
        
        int alpha[26]={0};
        for(int i=0; i<chars.size(); i++){
            int c = chars[i] - 'a';
            alpha[c]++;
        }
        
        int count=0;
        for(int i=0; i<words.size(); i++){
            if(formed(words[i], alpha)){
                count+=words[i].size();   
            }
        }
        return count;
    }
};
