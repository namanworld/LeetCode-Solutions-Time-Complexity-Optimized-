class Solution {
public:
    char findTheDifference(string s, string t) {
        int xora = s[0];
        for(int i=1; i<s.size(); i++){
            xora = xora^s[i];
        }
        for(int i=0; i<t.size(); i++){
            xora = xora^t[i];
        }
        return char(xora);
    }
};
