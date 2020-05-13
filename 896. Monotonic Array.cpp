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


WITHOUT SORTING :
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increasing = true, decreasing = true;
        for(int i=0;i<A.size()-1; i++){
            if(A[i]>A[i+1]) increasing = false;
            if(A[i]<A[i+1]) decreasing = false;
        }
        return increasing || decreasing;
    }
};
