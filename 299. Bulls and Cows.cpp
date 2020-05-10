class Solution {
public:
    string getHint(string secret, string guess) {
        if(secret.size()==0) return "";
        
        int corr = 0, wrong = 0;
        unordered_map<int, int> seen;
        vector<int> res;
        for(int i=0; i<secret.size(); i++) seen[secret[i]-'0']++;
        for(int i=0; i<guess.size(); i++){
            if(secret[i] == guess[i]) {
                seen[guess[i]-'0']--;
                corr++;
            }
            else if(seen.count(guess[i]-'0')!=0) {
                res.push_back(i);
            }
        }
        
        for(int i=0; i<res.size(); i++){
            if(seen[guess[res[i]]-'0'] > 0) {
                wrong++;
                seen[guess[res[i]]-'0']--;
            }
        }
        
        return to_string(corr) + "A" + to_string(wrong) + "B";
    }
};
