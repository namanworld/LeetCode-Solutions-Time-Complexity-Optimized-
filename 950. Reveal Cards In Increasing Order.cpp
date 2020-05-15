#include <bits/stdc++.h>
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        if(n==0) return {};
        queue<int> indices;
        for(int i=0; i<n; i++){
            indices.push(i);
        }
        
        vector<int> res(n);
        sort(deck.begin(), deck.end());
        
        for(int card:deck){
            res[indices.front()] = card;
            indices.pop();
            
            if(!indices.empty()){
                indices.push(indices.front());
                indices.pop();
            }
        }        
        return res;
    }
};
