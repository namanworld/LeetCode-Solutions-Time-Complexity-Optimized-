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
