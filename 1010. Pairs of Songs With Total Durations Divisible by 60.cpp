class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        if(time.size()==0) return 0;
        vector<int> times(60, 0);
        int count = 0;
        for(int i=0; i<time.size(); i++){
            times[time[i]%60]++;
        }
        
        for(int i=0; i<=30; i++){
            if(i==30 || i==0) count+=(times[i]*(times[i]-1)/2);
            else count+=times[i]*times[60-i];
        }
        return count;
    }
};
