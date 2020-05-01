class Solution {
public:
    #include <bits/stdc++.h>
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, bool> map;
        for(int i=0;i<nums1.size(); i++){
            map[nums1[i]] = true;
        }
        
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++){
            if(map.count(nums2[i])==0) continue;
            else{
                if(map[nums2[i]]==true){
                    ans.emplace_back(nums2[i]);
                    map[nums2[i]] = false;
                }
            }
        }
        return ans;
    }
};
