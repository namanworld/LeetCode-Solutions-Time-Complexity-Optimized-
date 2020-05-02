auto speedup(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Solution {
public:
    string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
                    
    #include <bits/stdc++.h>    
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        if(words.size()==0) return 0;
        
        for(int i=0; i<words.size(); i++){
            string temp = "";
            for(int j=0; j<words[i].size(); j++){
                temp+=arr[words[i][j]-'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};
