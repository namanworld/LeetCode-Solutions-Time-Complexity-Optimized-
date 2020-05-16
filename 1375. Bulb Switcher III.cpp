class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int count = 0, rightMax = -1;
        for(int i=0; i<light.size(); i++){
            if(light[i]>rightMax) rightMax = light[i];
            if(rightMax == i+1) count++;
        }
        
        return count;
    }
};

ANOTHER APPROACH:

class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int count = 0;
        int on[light.size()];
        memset(on, 0, sizeof(on));
        int currSum = 0;
        for(int i=0; i<light.size(); i++){
            on[light[i]-1] = 1;
            if(light[i]-1<i) currSum+=1;
            currSum+=on[i];
            
            
            
            if(currSum == i+1) count++;
        }
        return count;
    }
};

SOLUTION BUT CONSTRAINTS (INT RANGE EXCEEDS AT 46321*46322 MUL)

class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int count = 0;
        
        int currSum = 0;
        for(int i=0; i<light.size(); i++){
            currSum+=light[i];
            int temp = (i+1)*(i+2)/2;
            if(currSum == temp) count++;
        }
        return count;
    }
};
