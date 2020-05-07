class Solution {
public:
    #include <bits/stdc++.h>
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        unordered_map<int,int> freq;
        for(int i=0;i<arr.size(); i++){
            map[arr[i]]++;
        }
        for(auto it = map.begin(); it!=map.end(); it++){
            if(freq.count(it->second)==0) freq[it->second]=1;
            else return false;
        }
        return true;
    }
};
