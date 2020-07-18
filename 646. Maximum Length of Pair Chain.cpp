class Solution {
public:
    
    bool compare(vector<int> &a, vector<int> &b){
        if(a[1]!=b[1]) return a[1] < b[1];
        else return a[0]<b[0];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [this](vector<int> a, vector<int> b){ return compare(a, b);});
        int curr = INT_MIN, ans = 0;
        for(int i=0; i<pairs.size(); i++){
            if(curr < pairs[i][0]){
                curr = pairs[i][1];
                ans++;
            }
        }
        
        return ans;
    }
};
