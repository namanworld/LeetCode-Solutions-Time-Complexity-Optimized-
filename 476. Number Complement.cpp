class Solution {
public:
    #include <bits/stdc++.h>
    int findComplement(int num) {
        int dig = floor(log2(num))+1;
        return (abs(1<<dig)-1)^num;
    }
};
