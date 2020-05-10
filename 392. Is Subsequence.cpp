class Solution {
public:
    bool isSubsequence(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int j=0;
        for(int i=0; i<t.length(); i++){
            if(s[j]==t[i]) j++;
        }
        return j==s.length();
    }
};
