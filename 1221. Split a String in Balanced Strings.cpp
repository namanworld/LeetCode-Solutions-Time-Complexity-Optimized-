Runtime: 0 ms, faster than 100.00% of C++ online submissions for Split a String in Balanced Strings.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Split a String in Balanced Strings.

class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int tempCount = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='L') tempCount++;
            else tempCount--;
            if(!tempCount) count++;
        }
        
        return count;
    }
    
};
