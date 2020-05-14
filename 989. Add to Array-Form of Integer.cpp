#include <bits/stdc++.h>
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> res;
        int curr = K, i=A.size()-1;
        while(i>=0 || curr > 0){
            if(i>=0) curr+=A[i];
            res.push_back(curr%10);
            curr/=10;
            i--;
        }
        
        for(i; i>=0; i--) res.push_back(A[i]);
        
        reverse(res.begin(), res.end());
        return res;
    }
};
