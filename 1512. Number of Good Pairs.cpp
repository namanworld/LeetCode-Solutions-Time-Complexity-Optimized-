class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int freq[101] = {0};
        for(int c: nums){
            freq[c]++;
        }
        
        int ans = 0;
        for(int c: freq) ans+=c*(c-1)/2;
        return ans;
    }
};
