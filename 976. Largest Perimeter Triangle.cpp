class Solution {
public:
    #include <bits/stdc++.h>
    int largestPerimeter(vector<int>& A) {
        if(A.size()<3) return 0;
        int n = A.size();
        sort(A.begin(), A.end());
        for(int i=n-3;i>=0; i--)
            if(A[i]+A[i+1]>A[i+2])
                return A[i]+A[i+1]+A[i+2];
        return 0;
    }
};
