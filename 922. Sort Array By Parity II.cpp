class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ans(A.size());
        int oddC = 1, evenC=0;
        for(int c:A){
            if(c%2==0){
                ans[evenC] = c;
                evenC+=2;
            }
            else{
                ans[oddC] = c;
                oddC+=2;
            }
        }
        return ans;
    }
};
