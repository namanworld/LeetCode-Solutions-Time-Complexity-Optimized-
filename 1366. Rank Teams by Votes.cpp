class Solution {
public:
    string rankTeams(vector<string>& votes) {
        vector<vector<int> > count(26, vector<int>(27));
        for(char &a:votes[0]){
            count[a-'A'][26] = a;
        }
        for(string &vote:votes){
            for(int i=0; i<vote.size(); i++){
                --count[vote[i]-'A'][i];
            }
        }
        
        sort(count.begin(), count.end());
        string res="";
        for(int i=0; i<votes[0].size(); i++)
            res+=count[i][26];
        
        return res;
    }
};
