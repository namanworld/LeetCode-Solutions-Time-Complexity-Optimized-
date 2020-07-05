class Solution {
public:
    bool compare(pair<int, string> a, pair<int, string> b){
        if(a.first!=b.first) return a.first>b.first;
        else return a.second<b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for(auto &word: words){
            mp[word]++;
        }
        vector<pair<int, string> > vp;
        for(auto p: mp){
            vp.push_back({p.second, p.first});
        }
        sort(vp.begin(), vp.end(), [this](pair<int, string> a, pair<int, string> b){
            return compare(a, b);
        });
        
        vector<string> res;
        
        
        for(int i=0; i<vp.size() && k--; i++){
            res.push_back(vp[i].second);
        }
        return res;
    }
};
