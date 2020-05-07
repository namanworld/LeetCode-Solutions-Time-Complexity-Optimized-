class Solution {
public:
    #include<bits/stdc++.h>
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int c:nums){
            if(map.count(c)!=0) return true;
            map[c]++;
        }
        return false;
    }
};
