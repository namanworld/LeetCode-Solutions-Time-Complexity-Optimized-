class Solution {
public:
    #include<bits/stdc++.h>
    int maxNumberOfBalloons(string text) {
        int alpha[26];
        memset(alpha, 0, sizeof(alpha));
        
        for(auto x:text){
            alpha[x-'a']++;
        }
        
        string x = "balloon";
        
        int count = 0, i = 0;
        while(1){
            if(alpha[x[i]-'a']==0){
                break;
            }
            else{
                alpha[x[i]-'a']--;
            }
            i++;
            if(i==7) {
                i=0;
                count++;
            }
        }
        return count;
    }
};
