#include <bits/stdc++.h>
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        bool seen[nums.size()];
        memset(seen, 0, sizeof(seen));
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(!seen[i]){
                int curr = nums[i], count = 0;
                do{
                    curr = nums[curr];
                    count++;
                    seen[curr] = true;
                }while(curr!=nums[i]);
                ans = max(ans, count);
            }
        }
        return ans;
        
    }
};

BETTER:
#include <bits/stdc++.h>
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=INT_MAX){
                int curr = nums[i], count = 0;
                while(nums[curr]!=INT_MAX){
                    int temp = curr;
                    curr = nums[curr];
                    count++;
                    nums[temp] = INT_MAX;
                }
                ans = max(ans, count);
            }
        }
        return ans;
        
    }
};
