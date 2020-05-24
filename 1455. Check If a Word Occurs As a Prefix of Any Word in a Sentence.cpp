#include <bits/stdc++.h>
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream x(sentence);
        string word;
        int count = 1;
        while(x>>word){
            int i=0;
            for(; i<searchWord.size(); i++){
                if(word[i]!=searchWord[i]) break;
            }
            if(i==searchWord.size()) return count;
            count++;
        }
        return -1;
    }
};
