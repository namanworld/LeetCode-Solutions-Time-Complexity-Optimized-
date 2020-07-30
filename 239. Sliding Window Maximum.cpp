class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty()) return {};
        vector<int> res;
        deque<int> d(k);
        
        int i;
        for(i=0; i<k; i++){
            while(!d.empty() && nums[i] >= nums[d.back()]) d.pop_back();
            d.push_back(i);
        }
        
        for(; i<nums.size(); i++){
            res.emplace_back(nums[d.front()]);
            
            while(!d.empty() && d.front()<=i-k) d.pop_front();
            while(!d.empty() && nums[i] >= nums[d.back()]) d.pop_back();
            d.push_back(i);
        }
        
        res.emplace_back(nums[d.front()]);
        
        return res;
    }
};


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.empty()) return {};
        vector<int> res;
        multiset<int> m;
        
        int i;
        for(i=0; i<k; i++){
            while(!m.empty() && nums[i] >= nums[*m.rbegin()]) m.erase(--m.end());
            m.insert(i);
        }
        
        for(; i<nums.size(); i++){
            res.emplace_back(nums[*m.begin()]);
            
            while(!m.empty() && *m.begin()<=i-k) m.erase(m.begin());
            while(!m.empty() && nums[i] >= nums[*m.rbegin()]) m.erase(--m.end());
            m.insert(i);
        }
        
        res.emplace_back(nums[*m.begin()]);
        
        return res;
    }
};
