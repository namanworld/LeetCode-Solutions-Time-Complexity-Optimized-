#include <bits/stdc++.h>
class Solution {
public:
    bool compare(pair<int, int> p, pair<int, int> q){
        return p.second>q.second;
    }
    
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> freq;
        int all = arr.size();
        for(int c:arr){
            freq[c]++;
        }
        vector<pair<int, int> > v;
        for(auto it=freq.begin(); it!=freq.end(); it++){
            v.push_back({it->first, it->second});
        }
        sort(v.begin(), v.end(), [this](pair<int,int> p, pair<int, int> q){
            return compare(p,q);
        });
        
        int count = 0, removed=0;
        for(auto p:v){
            removed+=p.second;
            count++;
            if(removed>=all/2){
                break;
            }
        }
        
        return count;
    }
};
