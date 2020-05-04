class Solution {
public:
    #include <cstdlib>
    #include <bits/stdc++.h>
    string reformat(string s) {
        string alpha="";
        string digit="";
        for(auto x:s){
            if(int(x)>=97&&int(x)<=122) alpha+=x;
            else digit+=x;
        }
        
        if( (alpha.size()>digit.size() && alpha.size()-digit.size()>1) ||                           (digit.size()>alpha.size() && digit.size()-alpha.size()>1) ){
            string empty="";
            return empty;
        }
        string temp1="";
        string temp2="";
        if(alpha.size()>=digit.size()){
            temp1+=alpha;
            temp2+=digit;
        }
        else{
            temp1+=digit;
            temp2+=alpha;
        }
        int j=0;
        for(int i=0; i<s.size()&&j<temp1.size(); i=i+2,j++){
            s[i] = temp1[j];
        }
        j=0;
        for(int i=1; i<s.size()&&j<temp2.size(); i=i+2,j++){
            s[i] = temp2[j];
        }
        return s;
    }
};
