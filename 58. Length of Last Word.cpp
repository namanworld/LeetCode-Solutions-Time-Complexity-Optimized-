class Solution {
public:
    #include <bits/stdc++.h>
    int lengthOfLastWord(string s) {
        if(s.size()==0) return 0;
        istringstream split(s);
        string word="";
        while(split>>word){}
        return word.size();
    }
};


BETTER APPROACH:
class Solution {
public:
    #include <bits/stdc++.h>
    int lengthOfLastWord(string s) {
        if(s.size()==0) return 0;
        int e = s.size()-1;
        int count = 0;
        
        while(e>=0 && s[e]==' ') e--;
        
        for(int i=e; i>=0; i--){
            if(s[i]!=' ') count++;
            else break;
        }
        return count;
    }
};
