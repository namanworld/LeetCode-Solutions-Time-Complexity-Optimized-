class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        if(A.size()<=2) return false;
        int sum = 0;
        sum = accumulate(A.begin(), A.end(), sum);
        if(sum%3!=0) return false;
        int partSum = sum/3;
        
        int currSum = 0;
        int i=0;
        for(i;i<A.size(); i++){
            currSum+=A[i];
            if(currSum == partSum) break;
        }
        currSum = 0;
        int j=A.size()-1;
        for(j; j>=0; j--){
            currSum+=A[j];
            if(currSum == partSum) break;
        }
        if(j-i>=2) return true;
        else return false;
    }
};

O(N) Pass:
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        if(A.size()<=2) return false;
        int sum = 0;
        sum = accumulate(A.begin(), A.end(), sum);
        if(sum%3!=0) return false;
        int partSum = sum/3;
        
        int currSum = 0, times = 0;
        
        for(int i=0; i<A.size(); i++){
            currSum+=A[i];
            if(currSum == partSum){
                times++;
                currSum = 0;
            }
        }
        return times>=3;
    }
};
