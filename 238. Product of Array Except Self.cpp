O(N) Time & O(1) Space:
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> res(nums.size());
        res[0] = 1;
        for(int i=1; i<nums.size(); i++){
            res[i] = res[i-1]*nums[i-1]; 
        }
        int curr = 1;
        for(int i=nums.size()-1; i>=0; i--){
            res[i] = res[i]*curr;
            curr *= nums[i];
        }
        return res;
    }
};

O(N) Time & O(N) Space
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> res(nums.size());
        res[0] = 1;
        int curr = 1;
        for(int i=1; i<nums.size(); i++){
            curr *= nums[i-1];
            res[i] = curr;
        }
        curr = 1;
        for(int i=nums.size()-2; i>=0; i--){
            curr*=nums[i+1];
            res[i] = res[i]*curr;
        }
        return res;
    }
};
