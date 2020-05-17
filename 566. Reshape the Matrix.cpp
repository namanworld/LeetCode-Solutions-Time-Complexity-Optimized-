class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c !=int(nums.size()*nums[0].size()))  return nums;
        vector<vector<int>> res(r, vector<int>(c, 0));
        int r0 = 0, c0 = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[0].size(); j++){
                res[r0][c0] = nums[i][j];
                c0++;
                if(c0%c==0){
                    c0 = 0;
                    r0++;
                }
            }
        }
        return res;
    }
};

BETTER APPROACH:
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c !=int(nums.size()*nums[0].size()))  return nums;
        vector<vector<int>> res(r, vector<int>(c, 0));
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[0].size(); j++){
                res[count/c][count%c] = nums[i][j];
                count++;
            }
        }
        return res;
    }
};
