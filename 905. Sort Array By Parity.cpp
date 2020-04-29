class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l = 0, r = A.size()-1;
        vector<int> ans(A.size());
        for(int x : A) if (x % 2) ans[r--] = x; else ans[l++] = x;
        return ans;
    }
};
