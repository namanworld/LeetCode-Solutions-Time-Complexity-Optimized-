Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decrypt String from Alphabet to Integer Mapping.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Decrypt String from Alphabet to Integer Mapping.

class Solution {
public:
    string freqAlphabets(string s) {
        if(s.size()==0) return s;
        string code="";
        
        for(int i=0; i<s.size();){
            if(i+2>=s.size() || s[i+2]!='#') {
                code+=s[i]+48;
                i++;
            }
            else{
                int a = s[i]-48;
                int b = s[i+1]-48;
                a = 10*a+b;
                code+=(96+a);
                i+=3;
            }
        }
        return code;
    }
};
