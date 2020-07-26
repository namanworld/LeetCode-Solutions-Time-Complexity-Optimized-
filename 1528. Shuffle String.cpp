class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> mp;
        int i=0;
        for(int c: indices){
            mp[c]=s[i++];
        }
        
        string res = "";
        for(int i=0; i<indices.size(); ++i) res+=mp[i];
        return res;
    }
};
