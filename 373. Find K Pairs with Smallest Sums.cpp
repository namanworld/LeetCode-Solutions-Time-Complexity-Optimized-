class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        if(nums1.size() == 0 || nums2.size() ==0) return {};
        
        priority_queue<pair<int, pair<int, int>> , vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > q;
        set<pair<int, int> > s;
        
        q.push({nums1[0]+nums2[0], {0, 0}});
        s.insert({0,0});
        
        vector<vector<int> > res;
        
        for(int count = 0; count<k && count<nums1.size()*nums2.size(); count++){
            auto top = q.top();
            q.pop();
            
            res.push_back({nums1[top.second.first], nums2[top.second.second]});
            
            int i = top.second.first;
            int j = top.second.second;
            
            if(s.find({i+1, j}) == s.end()){
                if(i+1 < nums1.size() && j <nums2.size()) {
                    q.push({nums1[i+1] + nums2[j], {i+1, j}});
                    s.insert({i+1, j});
                }
            }
                        
            if(s.find({i, j+1}) == s.end()){
                if(i < nums1.size() && j+1 <nums2.size()) {
                    q.push({nums1[i] + nums2[j+1], {i, j+1}});
                    s.insert({i, j+1});
                }
            }
        }
        
        return res;
    }
};
