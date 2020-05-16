class Solution {
public:
    #include <bits/stdc++.h>
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]) return nums[i];
        }
        return 0;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        for(int i=0; i<nums.size(); i++){
            if(nums[abs(nums[i])]<0) return abs(nums[i]);
            else nums[abs(nums[i])] = -nums[abs(nums[i])];
        }
        return 0;
    }
};

FLOYD'S TORTOISE AND HARE:
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int tortoise = nums[0], hare = nums[0];
        
        do{
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while(tortoise!=hare);
        
        tortoise = nums[0];
        while(tortoise!=hare){
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return hare;
    }
};
