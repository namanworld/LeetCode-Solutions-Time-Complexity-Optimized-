class Solution {
public:
    #include<bits/stdc++.h>
    string reverseOnlyLetters(string S) {
        string temp = "";
        for(auto x:S){
            int a = x;
            if((a>=65&&a<=90) || (a>=97&&a<=122)){
                temp+=x;
            }
        }
        reverse(temp.begin(), temp.end());
        int i=0;
        for(auto &x:S){
            int a = x;
            if((a>=65&&a<=90) || (a>=97&&a<=122)){
                x=temp[i++];
            }    
        }
        return S;
    }
};
