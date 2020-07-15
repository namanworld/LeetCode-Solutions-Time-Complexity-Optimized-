class Solution {
public:
    int numSub(string s) {
        int counter = 1;
        //bool found = false;
        int MOD = 1000000007;
        int ans = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') ans = (ans + counter++)%MOD;
            else counter = 1;
        }
        return ans;
    }
};
