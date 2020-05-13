BETTER SOLUTION:

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=size(nums); vector<int> out;
        for(auto it:nums)
        {
            if(nums[abs(it)-1]>0)
            nums[abs(it)-1]*=-1; 
        }
        for(int i=0; i<size(nums); i++)
            if(nums[i]>0)
                out.push_back(i+1);
        return out;
    }
};

EASY APPROACH:

#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        for(int x:nums) s.insert(x);
        
        vector<int> res;
        for(int i=1; i<=nums.size(); i++){
            if(s.find(i)==s.end()) res.emplace_back(i);
        }
        return res;
    }
};


