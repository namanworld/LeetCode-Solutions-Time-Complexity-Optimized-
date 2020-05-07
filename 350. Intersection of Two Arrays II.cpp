#include <bits/stdc++.h>
class Solution {
public:
    Solution(){
        std::ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> m;
        for(int i=0; i<nums1.size(); i++) m.insert(nums1[i]);
        
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            auto it = m.find(nums2[i]);
            if(it!=m.end()){
                ans.push_back(*it);
                m.erase(it);
            }
        }
        return ans;
        
    }
};


BETTER
class Solution {
public:
    #include <bits/stdc++.h>
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        for(int i=0; i<nums1.size(); i++){
            map[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            if(map.count(nums2[i])>0){
                if(map[nums2[i]]>0){
                    ans.push_back(nums2[i]);
                    map[nums2[i]]--;
                }
            }
        }
        return ans;
    }
};
