#include <bits/stdc++.h>
class Solution {
public:
    unordered_map<int, int> rating;
    
    bool compare(int x, int y){
        if(rating[x]!=rating[y]) return rating[x]>rating[y];
        else return x>y;
    }
    
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> res;
        
        for(auto &x:restaurants){
                if(veganFriendly && x[2]){
                    if(x[3]<=maxPrice && x[4]<=maxDistance){
                        rating[x[0]]=x[1];
                        res.emplace_back(x[0]);
                    }
                }
                else if(!veganFriendly){
                    if(x[3]<=maxPrice && x[4]<=maxDistance){
                        rating[x[0]]=x[1];
                        res.emplace_back(x[0]);
                    }
                }
        }
        
        sort(res.begin(), res.end(), [this](int x, int y){
           return compare(x,y); 
        });
        
        return res;
    }
};


BETTER SOLUTION:
#include <bits/stdc++.h>
class Solution {
public:    
    bool compare(pair<int,int> x, pair<int,int> y){
        if(x.second!=y.second) return x.second>y.second;
        else return x.first>y.first;
    }
    
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<int> res;
        vector<pair<int, int>> temp;
        for(auto &x:restaurants){
            if(x[2]>(veganFriendly-1)&&x[3]<=maxPrice&&x[4]<=maxDistance) temp.push_back({x[0], x[1]});
        }
        
        sort(temp.begin(), temp.end(), [this](pair<int,int> x, pair<int,int> y){
           return compare(x,y); 
        });
        
        for(auto it=temp.begin(); it!=temp.end(); it++){
            res.emplace_back(it->first);
        }
        
        return res;
    }
};
