class Solution {
public:
    #include <bits/stdc++.h>
    #include <string>
    bool formed(string s, string t, string u){
        string temp="";
        bool ts=false;
        bool us=false;
        while(temp.size()<=t.size()){
            if(temp.size()==t.size() && t.compare(temp)==0) ts=true;
            if(temp.size()==u.size() && u.compare(temp)==0) us=true;
            temp+=s;
        }
        return ts&&us;
    }
    
    string gcdOfStrings(string str1, string str2) {
        if(str1.size()>str2.size()){
            swap(str1, str2);
        }
        //cout<<str1<<" "<<str2;
        vector<string> v;
        for(int i=1; i<=str1.size(); i++){
            if(formed(str1.substr(0,i),str2, str1)) {
                v.push_back(str1.substr(0,i));
            }
        }
        if(v.size()==0){
            string empty="";
            return empty;    
        }
        return v[v.size()-1];
    }
};
