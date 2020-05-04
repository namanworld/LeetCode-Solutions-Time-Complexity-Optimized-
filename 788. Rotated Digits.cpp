class Solution {
public:
    #include<bits/stdc++.h>
    
    bool valid(string dig){
        bool found = false;
        for(int i=0; i<dig.size(); i++){
            if(dig[i]=='3'||dig[i]=='4'||dig[i]=='7') return false;
            if(dig[i]=='2'||dig[i]=='5'||dig[i]=='6'||dig[i]=='9') found = true;   
        }
        return found;
    }
    
    int rotatedDigits(int N) {
        int count = 0;
        for(int i=1; i<=N; i++){
            string temp ="";
            temp += to_string(i) ;
            if(valid(temp)) count++;
        }
        return count;
    }
};
