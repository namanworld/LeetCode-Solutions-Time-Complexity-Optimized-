Runtime: 0 ms, faster than 100.00% of C++ online submissions for Complement of Base 10 Integer.
Memory Usage: 6.3 MB, less than 100.00% of C++ online submissions for Complement of Base 10 Integer.

class Solution {
public:
    #include<bits/stdc++.h>
    int bitwiseComplement(int num) {
        if(num==0) return 1;
        int dig = floor(log2(num))+1;
        return (abs(1<<dig)-1)^num;
    }
};
