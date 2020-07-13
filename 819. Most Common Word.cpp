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

#include <bits/stdc++.h>
class Solution {
public:
    bool compare(pair<string, int> p, pair<string, int> q){
        return p.second > q.second;
    }
    
    string mostCommonWord(string s, vector<string>& banned) {
        
        set<string> st;
        
        for(auto str: banned){
            st.insert(str);
        }
        
        map<string, int> mp;
        
        string word = "";
        for(int i=0; i<s.length(); i++){
            if(isalpha(s[i])) word+=s[i];
            
            if(!isalpha(s[i]) || i==s.length()-1){
                transform(word.begin(), word.end(), word.begin(), ::tolower);
                if(word.length() ==0) continue;
                mp[word]++;
                word="";
            }
        }
        
        vector<pair<string, int>> vp;
        for(auto m: mp){
            vp.push_back({m.first, m.second});
        }
        
        sort(vp.begin(), vp.end(), [this](pair<string, int> p, pair<string, int> q){
           return compare(p, q) ;
        });
        
        for(pair<string, int> p : vp){
            if(st.find(p.first) == st.end()) return p.first;
        }
        return "";
    }
};
