class Solution {
public:
    string toLowerCase(string str) {
        if(str.size()==0) return str;
        for(int i=0; i<str.size(); i++){
            if(str[i]<=90 && str[i]>=65) str[i]+=32;
        }
        return str;
    }
};
