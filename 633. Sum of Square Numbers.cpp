BINARY SEARCH O(logN)
#include<bits/stdc++.h>
class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<=1) return true;
        int i=0, j=sqrt(c);
        while(i<=j){
            if((long)i*i + j*j > c) j--;
            else if((long)i*i + j*j < c) i++;
            else return true;
        }
        return false;
    }
};

BETTER BRUTE FORCE:
#include<bits/stdc++.h>
class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<=1) return true;
        
        for(long a=0; a*a<=c; a++){
            double b = sqrt(c-a*a);
            if(b == (int)b)
                return true;
        }
        return false;
    }
};

FERMAT THEOREM:
#include<bits/stdc++.h>
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (int i = 2; i * i <= c; i++) {
            int count = 0;
            if (c % i == 0) {
                while (c % i == 0) {
                    count++;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            }
        }
        return c % 4 != 3;
    }
};
