class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ans;
        
        vector<int> v(26);
        for(char c:A[0]){
            v[c-'a']++;
        }
        
        for(int i=1; i<A.size(); i++){
            vector<int> temp(26);
            for(char c:A[i]){
                temp[c-'a']++;
            }
            
            for(int i=0; i<26; i++){
                v[i] = min(v[i], temp[i]);
            }
        }
        
        for(int i=0; i<26; i++){
            int x = 'a'+i;
            char c = (char)x;
            string s = "";
            s+=c;
            for(int j=0; j<v[i]; j++) ans.push_back(s);
        }
        
        return ans;
        
    }
};
