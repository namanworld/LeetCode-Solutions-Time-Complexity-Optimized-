class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size()-1;
        
        int ans = 0;
        int leftMax = 0, rightMax = 0;
        
        while(left<right){
            if(height[left]<height[right]){
                height[left] >= leftMax ? leftMax = height[left] : ans+=leftMax-height[left];
                ++left;
            }
            else{
                height[right] >= rightMax ? rightMax = height[right] : ans+=rightMax-height[right];
                right--;
            }
        }
        return ans;
    }
};
