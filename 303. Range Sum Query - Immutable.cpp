class NumArray {
private:
    int *arr;
    
public:
    NumArray(vector<int>& nums) {
        if(nums.size()!=0){
            arr = new int[nums.size()+1];
            arr[0] = 0;
            for(int i=0; i<nums.size(); i++)
                arr[i+1] = arr[i] + nums[i];
        }
    }
    
    int sumRange(int i, int j) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        return arr[j+1]-arr[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
