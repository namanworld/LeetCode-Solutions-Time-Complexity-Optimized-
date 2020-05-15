#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        if(n==0) return res;
        for(int i=0; i<n; i++){
            int index = abs(nums[i])-1;
            if(nums[index]<0) res.push_back(abs(nums[i]));
            else nums[index]=-nums[index];
        }
        return res;
    }
};


ALTERNATE:
#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, bool> o; 
        for(int c:nums){
            if(o.count(c)){
                res.push_back(c);
            }
            o[c] = true;
        }
        return res;
    }
};
