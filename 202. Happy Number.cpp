class Solution {
public:
    #include <bits/stdc++.h>
    bool isHappy(int n) {
       while(n>0){
           string temp = to_string(n);
           n = 0;
           for(auto c:temp){
               n+=(c-'0')*(c-'0');
           }
           if(n==4||n==1) break;
        } 
        if(n==1) return true;
        else return false;
    }
};
