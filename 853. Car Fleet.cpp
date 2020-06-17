#include <bits/stdc++.h>
class Solution {
public:
    int dest;
    double time(pair<int, int> car){
        return 1.0*(dest-car.first)/car.second;
    }
    
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        dest = target;
        int n = position.size();
        vector<pair<int, int> > cars;
        for(int i=0; i<n; ++i){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());
        
        // 12
        // 10 8 5 3 0
        // 2 4 1 3 1
        
        int fleet = 0, t = n;
        while(--t>0){
            if(time(cars[t])<time(cars[t-1])) fleet++;
            else cars[t-1] = cars[t];
        }
        return fleet + (t==0 ? 1 : 0);
    }
};
