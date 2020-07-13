class Solution {
public:
    string longestPalindrome(string s) {
        
        int start = 0, maxLength = 1;
        
        for(int i=0; i<s.length(); ++i){
            int lo = i-1, hi = i+1;
        
            while(lo>=0 && hi<s.length()){
                if(s[lo] == s[hi]) {
                    if(hi-lo+1 > maxLength){
                        start = lo;
                        maxLength = hi-lo+1;
                    }
                    lo--, hi++;
                }
                else break;
            }
            
            lo = i, hi = i+1;
            while(lo>=0 && hi<s.length()){
                if(s[lo] == s[hi]){
                    if(hi-lo+1 > maxLength){
                        start = lo;
                        maxLength = hi-lo+1;
                    }
                    lo--, hi++;
                }
                else break;
            }
        }
        
        cout<<start<<' '<<maxLength<<endl;
        
        return s.substr(start, maxLength);
    }
};
