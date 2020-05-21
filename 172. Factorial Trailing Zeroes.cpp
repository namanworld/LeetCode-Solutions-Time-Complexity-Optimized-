class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        for(long long int i=5; i<=n;){
            ans+=(n/i);
            i*=5;
        }
        return ans;
    }
};
