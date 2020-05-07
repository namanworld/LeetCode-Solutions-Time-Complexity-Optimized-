class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string upper = "QWERTYUIOPqwertyuiop";
        string middle = "ASDFGHIJKLasdfghjkl";
        string lower = "ZXCVBNMzxcvbnm";
        vector<string> canBeTyped;
        for(int i=0; i<words.size(); i++){
            bool fit = true;
            
            for(int j=1; j<words[i].size(); j++){
                if(lower.find(words[i][0])!=string::npos){
                    if(lower.find(words[i][j])==string::npos){
                        fit = false;
                        break;
                    }
                }
                else if(middle.find(words[i][0])!=string::npos){
                    if(middle.find(words[i][j])==string::npos){
                        fit = false;
                        break;
                    }
                }
                else{ 
                    if(upper.find(words[i][j])==string::npos){
                        fit = false;
                        break;
                    }
                }
            }
            if(fit) canBeTyped.push_back(words[i]);
        }
        return canBeTyped;
    }
};
