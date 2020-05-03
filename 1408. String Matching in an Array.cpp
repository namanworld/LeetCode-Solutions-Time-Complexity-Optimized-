#include <bits/stdc++.h>

auto speedup = [](){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    
    bool compare(string a, string b){
        return a.size()<b.size();
    }
    
    bool found(string a, string b){ 
        for(int i=0; i<b.size();){
            if(b[i] == a[0]){
                int j=0;
                while(j<a.size()&&(a[++j]==b[++i])){
                }
                if(j==a.size()) return true;
            }
            else i++;
        }
        return false;
    }
    
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        sort(words.begin(), words.end(), [this](string a, string b){
            return compare(a,b);
        });
        
        for(int i=0; i<words.size(); i++){
            int j = i+1;
            bool isPresent = false;
            for(j=i+1; j<words.size(); j++){
                if(found(words[i], words[j])) {
                    isPresent = true;
                    break;
                }
            }
            if(isPresent) ans.push_back(words[i]);
        }
        return ans;
    }
};
