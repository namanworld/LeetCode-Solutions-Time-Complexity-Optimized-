class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool ans = true;
        for(int i=0; i<bits.size();){
            if(i==bits.size()-2 && bits[i]==1) return false;
            if(bits[i]==1) i+=2;
            if(bits[i]==0) i+=1;
        }
        return ans;
    }
};
