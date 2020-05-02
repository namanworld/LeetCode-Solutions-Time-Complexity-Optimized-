class Solution {
public:
    #include <bits/stdc++.h>
    int numUniqueEmails(vector<string>& emails) {
        if(emails.size()==0) return 0;
        set<pair<string, string> > emailset;
        for(int i=0; i<emails.size(); i++){
            string temp1="";
            for(int j=0; emails[i][j]!='@'&&emails[i][j]!='+'; j++){
                if(emails[i][j]!='.') temp1+=emails[i][j];
            }
            string temp2="";
            for(int j=emails[i].size()-1; emails[i][j]!='@'; j--){
                temp2+=emails[i][j];
            }
            emailset.insert({temp1, temp2});
        }
        return emailset.size();
    }
};
