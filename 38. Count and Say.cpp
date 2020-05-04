class Solution {
public:
    #include <bits/stdc++.h>
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        
        string rec = countAndSay(n-1);
        int count = 1;
        char curr = rec[0];
        string ret = "";
        for(int i=0; i<rec.size(); i++){
            if(i == rec.size()-1){
                ret+=to_string(count)+curr;
                break;
            }
            else if(rec[i+1]!=curr){
                ret+=to_string(count)+curr;
                curr = rec[i+1];
                count = 1;
            }
            else if(rec[i+1]==curr) count++;
        }
        return ret;
        
    }
};


BETTER APPROACH
class Solution {
public:
    string countAndSay(int n) {
        
        
        
        vector<string>ans;
        ans.push_back("1");
        ans.push_back("11");
        while(ans.size()<=n)
        {
            string curr=ans[ans.size()-1];
           
            
            string p="";
            int r=1;
            int c=1;
            
            while(r<=curr.length())
            {
                if(curr[r]==curr[r-1])
                {
                    c++;
                    r++;
                }
                
                else
                {   // cout<<(char)c;
                    p+=c + '0';
                    p+=curr[r-1];
                    r++;
                    c=1;
                    
                }
            }
            
            
            ans.push_back(p);
            
            
        }
        return ans[n-1];
    }
};
