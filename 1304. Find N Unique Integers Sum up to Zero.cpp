Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
Memory Usage: 6.7 MB, less than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n==1) {
            ans.push_back(0);
            return ans;
        }
        
        if(n%2!=0){
            int m = n/2;
            m=m*-1;
            while(m<=0){
                ans.push_back(m);
                m++;
            }
            m=1;
            while(m<=n/2){
                ans.push_back(m);
                m++;
            }
            return ans;
        }
        else{
            int m = 1;
            while(m<=n/2){
                ans.push_back(m);
                ans.push_back(-m);
                m++;
            }
        }
        return ans;
    }
};
