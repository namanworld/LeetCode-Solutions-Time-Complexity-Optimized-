Runtime: 0 ms, faster than 100.00% of C++ online submissions for Defanging an IP Address.
Memory Usage: 6 MB, less than 100.00% of C++ online submissions for Defanging an IP Address.

class Solution {
public:
    string defangIPaddr(string address) {        
        string ans="";
        if(address.size()==0) return ans;
        
        for(int i=0; i<address.size(); i++){
            if(address[i]!='.') ans+=address[i];
            else{
                string t = "[.]";
                ans+=t;
            }
        }
        return ans;        
    }
};
