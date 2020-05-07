class Solution {
public:
    #include <bits/stdc++.h>
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int> map;
        for(auto c:s){
            map[c]++;
        }
        for(auto c:t){
            if(map.count(c)>0 && map[c]>0) map[c]--;
        }
        for(auto it=map.begin(); it!=map.end(); it++){
            if(it->second != 0) return false;
        }
        return true;
    }
};
