class Solution {
public:
    #include <algorithm>
    #include <set>
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int, int> > s;
        int count = 0;
        for(int i=nums.size()-1; i>=0; i--){
            int j=i-1;
            while(j>=0){
                if(nums[i]-nums[j]==k){
                    if(s.find({nums[i], nums[j]})==s.end()) {
                        count++;
                        s.insert({nums[i], nums[j]});
                    }
                    
                    break;
                }
                if(nums[i]-nums[j]>k) break;
                j--;
            }
        }
        return count;
    }
};


BETTER:
#include <bits/stdc++.h>
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(nums.size()==0) return 0;
        if(k<0) return 0;
        unordered_map<int,int> find;
        for(int num:nums) find[num]++;
        
        int count = 0;
        for(auto x:find){
            if((k==0&&x.second>1) || (k!=0&&find.count(x.first+k))) count++;
        }
        return count;
    }
};
