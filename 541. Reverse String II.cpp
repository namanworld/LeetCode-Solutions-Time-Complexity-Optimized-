class Solution {
public:
    #include <bits/stdc++.h>
    string reverseStr(string s, int k) {
        for(int start=0; start<s.size(); start=start+2*k){
            int i=start;
            int e=min(i+k-1, int(s.size()-1));
            while(i<=e){
                swap(s[i++], s[e--]);
            }
        }
        return s;
    }
};
