#include <bits/stdc++.h>
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()==0) return 0;
        unordered_map<int, int> degree;
        int maxDegree = 0;
        for(int c:nums){
            degree[c]++;
            if(degree[c]>maxDegree){
                maxDegree = degree[c];
            }
        }
        
        if(maxDegree == 1) return 1;
        
        int minD = INT_MAX;
        
        for(auto it=degree.begin(); it!=degree.end(); it++){  
            if(it->second != maxDegree) continue;
            int i=0, j=nums.size()-1;
            cout<<it->first<<" ";
        
            for(i; i<nums.size(); i++){
                if(nums[i]==it->first) break;
            }
            for(j; j>=0; j--){
                if(nums[j]==it->first) break;
            }
            if(minD > j-i+1) minD = j-i+1;
        }
        return minD;
    }
};


