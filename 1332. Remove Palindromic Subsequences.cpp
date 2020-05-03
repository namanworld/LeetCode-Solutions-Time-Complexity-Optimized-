class Solution {
public:
    bool isPal(string s){
        int st=0, e=s.size()-1;
        while(st<=e){
            if(s[st]!=s[e]) return false;
            st++;
            e--;
        }
        return true;
    }
    
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        else if(isPal(s)) return 1;
        else return 2;
    }
};
