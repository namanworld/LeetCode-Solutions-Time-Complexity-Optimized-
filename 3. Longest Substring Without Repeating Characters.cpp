class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        
        set<char> st;
        int res=0, i=0, j=0;
        while(i<n && j<n){
            if(st.find(s[j])==st.end()){
                st.insert(s[j++]);
                res = max(res, j-i);
            }
            else st.erase(s[i++]);
        }
        return res;
    }
};
