#include <bits/stdc++.h>
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = 0;
        sumA=std::accumulate(A.begin(), A.end(), sumA);
        int sumB = 0;
        sumB=std::accumulate(B.begin(), B.end(), sumB);
        
        set<int> s;
        for(int x:B) s.insert(x);
        
        for(int i=0; i<A.size(); i++){
            if(s.find(A[i] + (sumB-sumA)/2)!=s.end()){
                return {A[i], A[i] + (sumB-sumA)/2};
            }
        }
        return {};
    }
};
