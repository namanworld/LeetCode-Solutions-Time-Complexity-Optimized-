class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        while(n!=1){
            if(n%2!=0 && n/2!=0) return false;
            n = n>>1;
        }
        return true;
    }
};

BETTER APPROACH:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n&(n-1))==0;
    }
};
