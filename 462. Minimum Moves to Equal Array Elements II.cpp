O(NLOGN) 
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums[nums.size()/2];
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            count+=abs(nums[i]-mid);
        }
        return count;
};

O(N):
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int nth = n/2, jump =0;
        nth_element(nums.begin() , nums.begin() + nth , nums.end());
        int mid = nums[nth];
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            count+=abs(nums[i]-mid);
        }
        return count;
    }
};
