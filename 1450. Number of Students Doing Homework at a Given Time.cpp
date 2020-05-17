class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        if(startTime.size()==0) return 0;
        int count =0;
        for(int i=0; i<startTime.size(); i++){
            if(queryTime <= endTime[i] && queryTime >= startTime[i]) count++;
        }
        return count;
    }
};
