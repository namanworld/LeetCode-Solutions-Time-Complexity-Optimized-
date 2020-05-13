class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        vector<int> temp1(A);
        vector<int> temp2(A);
        sort(A.begin(), A.end());
        if(temp1 == A) return true;
        
        sort(A.begin(), A.end(), greater<int>());
        if(temp2 == A) return true;
        
        return false;
    }
};
