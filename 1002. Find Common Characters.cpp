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




O(N) approach

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        for(int i=0 ; i<words.size() ; i++){
            string s = words[i];
            string x = chars;
            int j;
            bool found = true;
            for(j=0 ; j<s.length() ; j++){
                int a = x.find(s[j]);
                if(a!=-1) x[a] = '-';
                else {
                    found = false;
                    break;
                }
            }
            if(j==s.length() && found) sum+=s.length();
        }
        return sum;
    }
};
