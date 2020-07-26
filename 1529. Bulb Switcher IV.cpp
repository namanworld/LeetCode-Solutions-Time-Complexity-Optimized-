class Solution {
public:
    int minFlips(string target) {
        int ans = 0;
        for(int i=1; i<target.length(); i++){
            if(target[i]!=target[i-1]) ans++;
        }
        if(target[0] == '1') ans++;
        return ans;
    }
};
