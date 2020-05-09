class Solution {
public:
    #include <bits/stdc++.h>
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()<2) return false;
        int count[10000]={0};
        for(int c:deck){
            count[c]++;
        }
        
        int currGCD = -1;
        for(int i=0; i<10000; i++){
            if(count[i]>0)
                if(currGCD == -1)
                    currGCD = count[i];
                else
                    currGCD = __gcd(count[i], currGCD);
        }
        return currGCD >= 2;
    }
};
