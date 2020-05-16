BRUTE FORCE:
class Solution {
public:
    int maxArea(vector<int>& height) {
        int posAns = 0;
        for(int i=0; i<height.size()-1; i++){
            for(int j=i+1; j<height.size(); j++){
                posAns = max(posAns, min(height[i], height[j])*(j-i));
            }
        }
        return posAns;
    }
};


OPTIMIZED:
static int fastio = []() {
    #define endl '\n'
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(0);
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int posAns = 0, left = 0, right = height.size()-1;
        while(left<right){
            posAns = max(posAns, min(height[left], height[right])*(right-left));
            if(height[left]<height[right]) left++;
            else right--;
        }
        return posAns;
    }
};
