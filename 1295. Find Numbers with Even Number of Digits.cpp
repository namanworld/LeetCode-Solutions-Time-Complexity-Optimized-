class Solution {
public:
    #include <bits/stdc++.h>
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int c:nums){
            if(int(1+log10(c))%2==0) count++;
        }
        return count;
    }
};
