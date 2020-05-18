Easy Approach:
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time = 0;
        for(int i=0; i<timeSeries.size(); i++){
            if(i==timeSeries.size()-1 || timeSeries[i]+duration<=timeSeries[i+1]){
                time+=duration;
            }
            else time+=timeSeries[i+1]-timeSeries[i];
        }
        return time;
    }
};

BETTER APPROACH:
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.size()==0) return 0;
        int time = 0;
        for(int i=0; i<timeSeries.size()-1; i++){
            time+=min(timeSeries[i+1]-timeSeries[i], duration);
        }
        return time+duration;
    }
};

BETTER:
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.empty()) return 0;
        int result = 0;
        int start = timeSeries[0];
        int end = timeSeries[0] + duration;
        for(auto time: timeSeries) {
            int curStart = time, curEnd = time + duration;
            if(curStart < end) end = curEnd;
            else {
                result += (end - start);
                start = curStart;
                end = curEnd;
            }
        }
        result += (end - start);
        return result;
    }
};
