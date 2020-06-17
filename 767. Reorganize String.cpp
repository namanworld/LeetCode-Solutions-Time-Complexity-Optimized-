class Solution {
public:
    string reorganizeString(string S) {
        int alpha[26]={0};
        for(char c:S) alpha[c-'a']+=100;
        for(int i=0; i<26; i++) alpha[i]+=i;
        
        sort(alpha, alpha+26);
        
        string res(S);
        int t=1;
        for(int code:alpha){
            int ct = code/100;
            char ch = (char)('a'+(code%100));
            if(ct>(S.size()+1)/2) return "";
            for(int i=0; i<ct; ++i){
                if(t>=S.size()) t=0;
                res[t]=ch;
                t+=2;
            }
        }
        return res;        
    }
};
