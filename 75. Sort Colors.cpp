#include <bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, pivot = 1, mid = 0, j = nums.size()-1;
        while(mid<=j){
            if(nums[mid]<pivot){
                swap(nums[mid++], nums[i++]);
            }
            else if(nums[mid]>pivot){
                swap(nums[mid], nums[j--]);
            }
            else mid++;
        }
    }
};
