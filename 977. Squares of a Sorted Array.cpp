class Solution {
public:
    #include <bits/stdc++.h>
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size();
        int j = 0;
        while(j<n && A[j]<0) j++;
        int i = j-1;
        vector<int> res;
        while(i>=0 && j<n){
            if(A[i]*A[i] > A[j]*A[j]) {
                res.emplace_back(A[j]*A[j]);
                j++;
                }
            else{
                res.emplace_back(A[i]*A[i]);
                i--;
            }
        }
        
        while(i>=0){
            res.emplace_back(A[i]*A[i]);
            i--;
        }
        
        while(j<n){
            res.emplace_back(A[j]*A[j]);
            j++;
        }
        return res;
    }
};
