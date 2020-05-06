class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> a;
        int l = 0;
        int r = S.size();
        for(auto c:S){
            if(c=='I'){
                a.push_back(l++);
            }
            else{
                a.push_back(r--);
            }
        }
        if(S[S.size()-1]=='I') a.push_back(l);
        else a.push_back(r);
        return a;
    }
};
