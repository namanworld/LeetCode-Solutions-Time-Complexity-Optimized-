class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res;
        vector<int> prefixSum;
        for(int i=0, prexor=0; i<arr.size(); i++){
            prexor ^= arr[i];
            cout<<prexor<<" ";
            prefixSum.push_back(prexor);
        }
        cout<<endl;
        for(int i=0; i<queries.size(); i++){
            int L = queries[i][0];
            int R = queries[i][1];
            cout<<L<<" "<<R<<endl;
            int temp;
            if(L==0) temp = 0;
            else temp = prefixSum[L-1];
            res.push_back(prefixSum[R] ^ temp);
        }
        
        return res;
    }
};
