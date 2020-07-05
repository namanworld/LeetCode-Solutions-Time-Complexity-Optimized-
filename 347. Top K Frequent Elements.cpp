class Solution {
public:
    
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int c: nums){
            mp[c]++;
        }
        vector<pair<int, int> > vp;
        for(auto p: mp){
            vp.push_back({p.second, p.first});
        }
    
        sort(vp.begin(), vp.end());
        vector<int> res;
        int i=vp.size()-1;
        while(k--){
            res.push_back(vp[i].second);
            i--;
        }
    return res;
    }
};
