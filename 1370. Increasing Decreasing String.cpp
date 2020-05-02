class Solution {
public:
    #include<bits/stdc++.h>
    string sortString(string s) {
        int freq[26];
        memset(freq, 0, sizeof(freq));
        for(auto c:s){
            freq[c-'a']++;
        }
        string res="";
        for(int i=0; i<s.size();){
            for(int j=0; j<26; j++){
                if(freq[j]!=0){
                    res+=97+j;
                    i++;
                    freq[j]--;
                }
            }
            for(int j=25; j>=0; j--){
                if(freq[j]!=0){
                    res+=97+j;
                    i++;
                    freq[j]--;
                }
            }
        }
        return res;
    }
};
