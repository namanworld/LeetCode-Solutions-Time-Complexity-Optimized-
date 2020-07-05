#include <bits/stdc++.h>
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = INT_MIN;
        
        for(int c:left){
            ans = max(ans, c);
        }
        
        for(int c:right){
            ans = max(ans, n-c);
        }
        return ans;
        
    }
};
