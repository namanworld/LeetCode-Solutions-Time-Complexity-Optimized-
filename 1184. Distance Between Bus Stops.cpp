class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        if(start==destination) return 0;
        int sum = 0;
        sum = accumulate(distance.begin(), distance.end(), sum);
        int dist = 0;
        
        for(int i=min(start,destination); i<max(start,destination); i++){
            dist+=distance[i];
        }
        return min(dist, sum-dist);
    }
};
