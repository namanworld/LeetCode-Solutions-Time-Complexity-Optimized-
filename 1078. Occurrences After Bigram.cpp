class Solution {
public:
    #include <bits/stdc++.h>
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> temp;
        stringstream ss(text);
        string word="";
        while(ss>>word){
            temp.push_back(word);
        }
        vector<string> ans;
        for(int i=0; i<temp.size()-2; i++){
            if(temp[i]==first && temp[i+1]==second) ans.push_back(temp[i+2]);
        }
        return ans;
    }
};
