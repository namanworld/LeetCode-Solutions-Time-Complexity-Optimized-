class Solution {
public:
    bool judgeCircle(string moves) {
        int countV = 0, countH = 0;
        for(auto c : moves){
            if(c=='U') countV++;
            if(c=='D') countV--;
            if(c=='R') countH++;
            if(c=='L') countH--;
        }
        if(!countH && !countV) return true;
        else return false;
    }
};
