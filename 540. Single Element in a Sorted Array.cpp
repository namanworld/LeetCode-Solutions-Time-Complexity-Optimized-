class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0, e = nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            cout<<mid<<endl;
            if(mid%2==0){
                if(mid!=0 && nums[mid]==nums[mid-1]) e = mid-1;
                else if(mid!=nums.size()-1 && nums[mid]==nums[mid+1]) s = mid+1;
                else return nums[mid];
            }
            else{
                if(mid!=0 && nums[mid]==nums[mid-1]) s = mid+1;
                else if(mid!=nums.size()-1 && nums[mid]==nums[mid+1]) e = mid-1;
                else return nums[mid];
            }
        }
        return 0;
    }
};

