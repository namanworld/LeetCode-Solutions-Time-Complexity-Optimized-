Runtime: 0 ms, faster than 100.00% of C++ online submissions for Guess Number Higher or Lower.
Memory Usage: 5.9 MB, less than 100.00% of C++ online submissions for Guess Number Higher or Lower.

class Solution {
public:
    int guessNumber(int n) {
        int s = 0;
        int e = n;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(guess(mid)==0) return mid;
            else if (guess(mid)==-1) e = mid-1;
            else s = mid+1;
        }
        return 0;
        
    }
};
