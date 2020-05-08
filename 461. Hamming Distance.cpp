class Solution {
public:
    #include <bits/stdc++.h>
    
    int hammingDistance(int x, int y) {
        int count = 0;
        for(int i=31; i>=0; i--){
            int k1 = x>>i;
            int k2 = y>>i;
            if((k1&1)^(k2&1)) count++;
        }
        return count;        
    }
};
