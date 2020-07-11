O(NlogK) method by altering the priority queue.

struct compare{
    bool operator()(const pair<int,int> &x, const pair<int, int> &y){
        return x.second > y.second;
    }
};

class Solution {

public:
    map<int, int> mp;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(int c: nums){
            mp[c]++;
        }
        
        vector<pair<int, int>> vp;
        
        for(auto it: mp){
            vp.push_back({it.first, it.second});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        
        //cout<<vp.size()<<endl;
        
        for(auto p: vp){
            pq.push(p);
            //cout<<pq.size()<<endl;
            if(pq.size() > k) pq.pop();
        }
        
        vector<int> res;
        
        //cout<<pq.size()<<endl;
        
        while(pq.size()){
            res.push_back(pq.top().first);
            pq.pop();
        }
        
        return res;
    }
};

//O(NlogN) Method:

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
