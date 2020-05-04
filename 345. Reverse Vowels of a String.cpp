class Solution {
public:
    #include <bits/stdc++.h>
    string reverseVowels(string s) {
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                v.push_back(i);
            }
        }
        int st = 0;
        int e = v.size()-1;
        while(st<=e){
            swap(s[v[st]], s[v[e]]);
            st++,e--;
        }
        return s;
    }
};
