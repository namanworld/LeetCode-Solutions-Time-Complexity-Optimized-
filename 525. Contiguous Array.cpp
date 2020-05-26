class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> m;
        m[0] = -1;
        int maxLength = 0, counter = 0;
        for(int i=0; i<nums.size(); ++i){
            counter = counter + (nums[i]==1 ? 1 : -1);
            if(m.count(counter)>0){
                maxLength = max(maxLength, i-m[counter]);
            }
            else m[counter] = i;
        }
        return maxLength;
    }
};
