class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> dup(nums);
        sort(dup.begin(), dup.end());
        int start = dup.size(), end = 0;
        for(int i=0 ;i<dup.size(); i++){
            if(dup[i]!=nums[i]){
                start = min(start, i);
                end = max(end, i);
            }
        }
        return end-start>=0 ? end-start+1 : 0;
    }
};
