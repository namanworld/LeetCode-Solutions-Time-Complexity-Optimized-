##Runtime: 20 ms, faster than 100.00% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
##Memory Usage: 15.2 MB, less than 100.00% of C++ online submissions for Replace Elements with Greatest Element on Right Side.

class Solution {
public:
    #include<bits/stdc++.h>
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        ans.emplace_back(-1);
        int n = arr.size();
        int currMax = arr[n-1];
        for(int i=n-2; i>=0; i--){
            ans.emplace_back(currMax);
            if(arr[i]>currMax) currMax = arr[i];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
