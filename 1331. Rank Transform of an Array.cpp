#include <bits/stdc++.h>
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        if(arr.size()==0) return {};
        if(arr.size()==1) return {1};
        unordered_map<int, int> rank;
        vector<int> temp(arr);
        sort(temp.begin(), temp.end());
        
        rank[temp[0]] = 1;
        int currRank = 1;
        for(int i=1;i<temp.size(); i++){
            if(temp[i]!=temp[i-1]) rank[temp[i]] = ++currRank;
        }
        
        for(int i=0; i<arr.size(); i++)
            arr[i] = rank[arr[i]];
        return arr;
    }
};
