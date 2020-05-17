class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if(arr.size()==0) return 0;
        int count = 0, curr = 0;
        for(int i=0; i<arr.size(); i++){
            curr = max(curr, arr[i]);
            if(curr == i) count++;
        }
        return count;
    }
};
