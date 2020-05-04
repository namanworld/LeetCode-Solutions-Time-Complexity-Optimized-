class Solution {
public:
    #include <bits/stdc++.h>
    bool isPalindrome(string s) {
        string toCheck="";
        for(auto x:s){
            int a = int(x);
            if(a>=65&&a<=90){
                char temp = x + 32;
                toCheck+=temp;
            }
            else if(a>=97&&a<=122) toCheck+=x;
            else if(a>=48&&a<=57) toCheck+=x;
        }
        int st=0, e=toCheck.size()-1;
        while(st<=e){
            if(toCheck[st++]!=toCheck[e--]) return false;
        }
        return true;
    }
};

BETTER APPROACH:
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (!(islower(s[i]) || isupper(s[i]) || isdigit(s[i])))
                i++;
            else if (!(islower(s[j]) || isupper(s[j]) || isdigit(s[j])))
                j--;
            else {
                if (tolower(s[i]) != tolower(s[j]))
                    return false;
                i++;
                j--;
            }
        }
        return true;
    }
};
