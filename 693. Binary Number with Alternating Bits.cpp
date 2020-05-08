One line solution:
return (n & (n >> 1)) == 0 && (n & (n >> 2)) == (n >> 2);

Iterative:

class Solution {
public:
    #include <bits/stdc++.h>
    bool hasAlternatingBits(int n) {
        string s = "";
        int dig = floor(log2(n))+1;
        for(int i=dig-1;i>=0; i--){
            int k = n>>i;
            if(k & 1) s += '1';
            else s += '0';
        }
        cout<<s;
        for(int i=1; i<dig; i++){
            if(s[i]==s[i-1]) return false;
        }
        return true;
    }
};


#include <bits/stdc++.h>
    bool hasAlternatingBits(int n) {
        string s = "";
        int lastBit=2;
        int dig = floor(log2(n))+1;
        for(int i=dig-1;i>=0; i--){
            int k = n>>i;
            if(k & 1){
                if(lastBit == 2) lastBit = 1;
                else if(lastBit == 1) return false;
                lastBit = 1;
            }
            else{
                if(lastBit == 2) lastBit = 0;
                else if(lastBit == 0) return false;
                lastBit = 0;
            }
        }
        return true;
   }
