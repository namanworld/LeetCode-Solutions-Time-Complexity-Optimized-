void runtime(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ans;
        int evenSum=0;
        for(int j=0; j<A.size(); j++){
            if(abs(A[j])%2==0) evenSum+=A[j];
        }
        for(int i=0; i<queries.size(); i++){
            int val = queries[i][0];
            int index = queries[i][1];
            if(abs(val)%2==0){
                if(abs(A[index])%2==0) evenSum+=val;
            }
            else{
                if(abs(A[index])%2==0) evenSum=evenSum-A[index];
                else evenSum+=val+A[index];
            }
            A[index] = val + A[index];
            ans.push_back(evenSum);
        }
        return ans;
    }
};
