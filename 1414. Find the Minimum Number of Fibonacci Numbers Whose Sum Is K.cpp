class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> fib;
        fib.push_back(1);
        fib.push_back(1);
        for(int i=2;; i++){
            int curr = fib[i-1] + fib[i-2];
            if(curr>k) break;
            fib.push_back(curr);   
        }
        
        if(fib.back()==k) return 1;
        
        int rem = k, count = 0;
        for(int i=fib.size()-1; i>=0; i--){
            if(fib[i]<=rem){
                count++;
                rem-=fib[i];
            }
            if(rem == 0) break;
        }
        return count;
    }
};
