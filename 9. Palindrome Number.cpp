class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0 || (n!=0 && n%10==0)) return false;
        
        int reversedNumber = 0;
        while(n>reversedNumber){
            reversedNumber = 10*reversedNumber + n%10;
            n/=10;
        }
        return n==reversedNumber || n==reversedNumber/10;
    }
};
