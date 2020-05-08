class Solution {
public:
    #include <bits/stdc++.h>
    bool isPrime(int n){
        if(n==1) return false;
        bool flag = true;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i == 0){
                flag = false;
                break;
            }
        }
        if(flag) return true;
        else return false;
    }
    
    int countPrimeSetBits(int L, int R) {
        int count = 0;
        
        for(int i=L;i<=R; i++){
            if(isPrime(__builtin_popcount(i))) count++;
        }
        return count;
    }
};
