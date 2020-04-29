Runtime: 8 ms, faster than 96.29% of C++ online submissions for Find Lucky Integer in an Array.
Memory Usage: 10 MB, less than 100.00% of C++ online submissions for Find Lucky Integer in an Array.

class Solution {
public:
    #include<bits/stdc++.h>
    int findLucky(vector<int>& arr) {
        int newarr[502];
        memset(newarr,0,sizeof(newarr));
        for(int i=0; i<arr.size(); i++){
            newarr[arr[i]]++;
        }
        for(int i=500;i>0; i--){
            if(newarr[i]==i) return i;
        }
        return -1;
    }
};
