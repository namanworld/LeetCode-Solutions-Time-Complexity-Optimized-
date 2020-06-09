class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        set<string> rootSet;
        for(string s:dict) rootSet.insert(s);
        
        stringstream s(sentence);
        string word;
        vector<string> words;
        while(s>>word){
            words.push_back(word);
        }
        string ans ="";
        for(string x:words){
            string prefix = "";
            for(int i=1; i<=x.length(); ++i){
                prefix = x.substr(0, i);
                if(rootSet.find(prefix)!=rootSet.end()) break;
            }
            if(ans.length()>0) ans+=" ";
            ans+=prefix;
        }
        return ans;
    }
};

