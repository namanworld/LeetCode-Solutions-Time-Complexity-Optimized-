#include <bits/stdc++.h>
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int > freq;
        for(int i=0; i<dominoes.size(); i++){
            pair<int, int> p1 = {min(dominoes[i][0], dominoes[i][1]), max(dominoes[i][0], dominoes[i][1])};
            
            if(freq.count(p1) > 0){
                freq[p1]++;
                continue;
            }
            
            freq[p1] = 1;
        }
        int sum = 0;
        for(auto it=freq.begin(); it!=freq.end(); it++){
            if(it->second > 1){
                sum += (it->second)*(it->second - 1)/2;
            }
        }
        return sum;
    }
};
