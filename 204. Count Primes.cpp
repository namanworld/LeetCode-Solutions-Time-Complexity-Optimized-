class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;
        bool primals[n];
        memset(primals, true, sizeof(primals));
        primals[0] = false, primals[1] = false;
        for(int i=2; i<sqrt(n); i++){
            if(primals[i])
                for(int k = i*i; k<n; k+=i)
                    primals[k] = false;
        }
        
        int count = 0;
        for(int i=0; i<n; i++){
            if(primals[i]) count++;
        }
        return count;
    }
};
