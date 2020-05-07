class Solution {
public:
    #include <bits/stdc++.h>
    string possibleAns = "";
    string shortestCompletingWord(string licensePlate, vector<string>& words) {  
        for(int i=0; i<words.size(); i++){
            unordered_map<char, int> map;
            for(auto c:licensePlate){
                if(isalpha(c)){
                    map[char(tolower(c))]++;
                    cout<<char(tolower(c))<<" ";
                }
            }
            
            for(auto c:words[i]){
                if(map.count(char(tolower(c)))!=0&&map[char(tolower(c))]!=0) 
                    map[char(tolower(c))]--;
            }
            
            bool ans = true;
            for(auto it=map.begin(); it!=map.end(); it++){
                if(it->second!=0){
                    ans = false;
                    break;
                }
            }
            if(ans) {
                if(possibleAns.size()==0) possibleAns+=words[i];
                else{
                    if(words[i].size()<possibleAns.size()) possibleAns = words[i];
                }
            }
            map.erase(map.begin(), map.end());
        }
        return possibleAns;
    }
};
