class Solution {
public:
    #include<bits/stdc++.h>
    int smallestRangeI(vector<int>& A, int K) {
        int minn = A[0], maxx = A[0];
        for(auto x:A){
            if(x>maxx) maxx = x;
            if(x<minn) minn = x;
        }
        return max(0,maxx-minn-2*K);
    }
};
