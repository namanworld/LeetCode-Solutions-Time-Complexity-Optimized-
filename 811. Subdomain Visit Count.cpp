class Solution {
public:
    #include <bits/stdc++.h>
    #include <string>
    #include <stdlib.h>
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> ans;
        unordered_map<string, int> map;
        for(int i=0; i<cpdomains.size(); i++){
            int curr = std::stoi(cpdomains[i]);
            for(int j=0; j<cpdomains[i].size(); j++){
                if(cpdomains[i][j]==' '||cpdomains[i][j]=='.')            
                    map[cpdomains[i].substr(j+1)]=map[cpdomains[i].substr(j+1)]+curr;
            }
        }
        for(auto it=map.begin(); it!=map.end(); it++){
            string temp = to_string(it->second);
            temp+=' '+(it->first);
            ans.push_back(temp);
        }
        return ans;
    }
};
