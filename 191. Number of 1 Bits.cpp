class Solution {
public:
    #include <bits/stdc++.h>
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};
