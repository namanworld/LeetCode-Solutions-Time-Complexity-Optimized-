Runtime: 0 ms, faster than 100.00% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
Memory Usage: 6.4 MB, less than 100.00% of C++ online submissions for Generate a String With Characters That Have Odd Counts.

class Solution {
public:
    string generateTheString(int n) {
        string res="";
        if(n%2!=0){
            int i=1;
            while(i<=n){
                res+='a';
                i++;
            }
        }
        else{
            int i=1;
            while(i<n){
                res+='a';
                i++;
            }
            res+='b';
        }
        return res;
    }
};
