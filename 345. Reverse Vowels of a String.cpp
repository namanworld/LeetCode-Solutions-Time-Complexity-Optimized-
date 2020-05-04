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


BETTER APPROACH:
class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j)
        {
            i=s.find_first_of("aeiouAEIOU",i);
            j=s.find_last_of("aeiouAEIOU",j);
            if(i<j)
                swap(s[i++],s[j--]);
        }
        return s;
    }
};
