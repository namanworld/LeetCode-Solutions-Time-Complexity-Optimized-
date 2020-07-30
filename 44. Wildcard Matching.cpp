class Solution {
public:
    bool isMatch(string s, string p) {
        if(s.size()==0 && p.size()==0) return true;
        
        int index = 1;
        
        for(int i=1; i<p.size(); i++){
            if(p[i]=='*' && p[i-1] == p[i]) continue;
            p[index++] = p[i];
        }
        
        bool dp[s.size()+1][index+1];
        for(int i=0; i<=s.size(); i++){
            for(int j=0; j<=index; j++){
                dp[i][j] = false;
            }
        }
        
        if(p.size()>0 && p[0]=='*') dp[0][1] = true;
        dp[0][0] = true;
        
        for(int i=1; i<=s.size(); i++){
            for(int j=1; j<=index; j++){
                if(s[i-1]==p[j-1] || p[j-1]=='?') dp[i][j] = dp[i-1][j-1];
                else if(p[j-1]=='*') dp[i][j] = dp[i-1][j] || dp[i][j-1];
            }
        }
        
        return dp[s.size()][index];
    }
};
