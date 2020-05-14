class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size()<=1) return true;        
        bool modified = false;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                if(modified) return false;
                modified = true;
                if(i==0||nums[i+1]>=nums[i-1]) nums[i]=nums[i+1];
                else nums[i+1]=nums[i];
            }
        }
        return true;
    }
};


class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool check = false;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]) {
                if(check == true) return false;
                if(i>0 && nums[i+1]<nums[i-1]) nums[i+1] = nums[i];
                else nums[i] = nums[i+1];
                check = true;
            }
        }
        return true;
    }
};

BETTER APPROACH:
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int c=0,cmax=-1;
        if(n==1)return true;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                if(cmax!=-1)return false;
                cmax=i;
            }
        }
        if(cmax==0 || cmax==n-2 || cmax==-1)return true;
        if(nums[cmax-1]<=nums[cmax+1] || nums[cmax]<=nums[cmax+2])return true;
        return false;
    }
};
