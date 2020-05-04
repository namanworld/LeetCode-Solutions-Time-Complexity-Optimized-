class Solution {
public:
    #include<bits/stdc++.h>
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> map;
        for(auto &x : paragraph){
            if(isalpha(x)) x = tolower(x);
            else x = ' ';
        }
        
        stringstream split(paragraph);
        string word;
        string maxFreq;
        int maxCount = 0;
        while(split>>word){
            if(ban.find(word)==ban.end()){
                map[word]++;
                if(map[word]>maxCount){
                    maxCount = map[word];
                    maxFreq = word;
                }
            }
        }
        return maxFreq;
        
    }
};
