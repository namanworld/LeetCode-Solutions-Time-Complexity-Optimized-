class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> m;
        int i=0, j;
        for(j=0; j<nums.size(); j++){
            m.insert(nums[j]);
            if(*m.rbegin()-*m.begin()>limit) m.erase(m.find(nums[i++]));
        }
        return j-i;
    }
};

Using deque;
class Solution {
public:
    deque<int> maxd, mind;
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0, j=0;
        for(j; j<nums.size(); j++){
            while(!maxd.empty()&&nums[j]>maxd.back()) maxd.pop_back();
            while(!mind.empty()&&nums[j]<mind.back()) mind.pop_back();
            maxd.push_back(nums[j]);
            mind.push_back(nums[j]);
            if(maxd.front()-mind.front()>limit){
                if(maxd.front()==nums[i]) maxd.pop_front();
                if(mind.front()==nums[i]) mind.pop_front();
                i++;
            }
        }
        return j-i;
    }
};
