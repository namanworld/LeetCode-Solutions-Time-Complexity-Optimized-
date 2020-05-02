Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Perfect Square.
Memory Usage: 6.3 MB, less than 100.00% of C++ online submissions for Valid Perfect Square.


class Solution {
public:
    #include<cmath>
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int digits = 1+log10(num);
        long long k=0;
        if(digits%2==0){
            k = pow(10,digits/2)-1;
        }
        else{
            k = pow(10, digits/2 + 1)-1;
        }
        
        long long s = 1;
        long long e = k;
        while(s<=e){
            long long mid = s+(e-s)/2;
            if(mid*mid == num){
                return true;
            }
            else if(mid*mid > num) e--;
            else s++;
        }
        return false;
    }
};
