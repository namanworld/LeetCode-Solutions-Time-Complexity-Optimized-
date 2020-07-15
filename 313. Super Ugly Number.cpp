TLE : Using Priority Queue O(NKlog(sizeofpq)):
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        priority_queue<int, vector<int>, greater<int> > pq;
        pq.push(1);
        set<long long> s;
        
        while(n){
            long long k = pq.top();
            pq.pop();
            if(n==1) return k;
            for(int c: primes){
                if(s.find(k*c) != s.end()) continue;
                pq.push(k*c);
                s.insert(k*c);
            }
            n--;
        }
        
        return pq.top();
    }
};

TLE : Naive Approach:
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
        int res = 1;
        n--;
        
        for(int i=2; n>0; i++){
            int j=0;
            int num = i;
            while(j<primes.size() && num>1){
                if(primes[j] > num) {
                    j++;
                    continue;
                }
                else if(num % primes[j] == 0){
                    while(num%primes[j] == 0){
                        num /= primes[j];
                    }
                }
                j++;
            }
            
            if(num == 1) {
                res = i;
                n--;
            }

        }
        
        return res;
    }
};
