class Solution {
public:
    bool vis[50001];
    
    bool canReach(vector<int>& arr, int start) {
        if(vis[start]) return false;
        vis[start] = true;
        if(arr[start]==0) return true;
        bool ans1 = false;
        if(start+arr[start] < arr.size()) ans1 = canReach(arr, start+arr[start]);
        if(ans1) return ans1;
        
        if(start-arr[start]>=0) ans1 = canReach(arr, start-arr[start]);
        return ans1;
    }
};
