class Solution {
public:
    int numofprimes(int n){
        int primeCount = 0;
        for(int i=2; i<=n; i++){
            bool prime = true;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    prime = false;
                    break;
                }
            }
            if(prime) primeCount++;
        }
        return primeCount;
    }
    
    
    
    int numPrimeArrangements(int n) {
        long long mod = 1000000007;
        
        int x = numofprimes(n);
        long long temp = 1;
        for(int i=1; i<=x; i++){
            temp = (temp%mod)*i;
            temp%=mod;
        }
        for(int i=1; i<=n-x; i++){
            temp = (temp%mod)*i;
            temp%=mod;
        }
        return temp;
    }
};
