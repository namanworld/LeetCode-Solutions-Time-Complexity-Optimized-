class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string cur = "";
        for (char c:s){
            if (c==' ' && !cur.empty()){
                res = cur + " " + res;
                cur = "";
            }else if (c!=' '){
                cur.push_back(c);
            }
        }
        if (!cur.empty()){
            res = cur + " " + res;
        }
        res.pop_back();
        return res;
    }
};


class Solution {
public:
    string reverseWords(string s) {
        if(s.length()==0) return "";
        string res="";
        stringstream input(s);
        string word;
        while(input>>word){
            reverse(word.begin(), word.end());
            if(res.size()!=0) res+=" ";
            res+=word;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
