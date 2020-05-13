class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int> > transpose;
        for(int i=0; i<A[0].size(); i++){
            vector<int> temp;
            for(int j=0; j<A.size(); j++){
                temp.push_back(A[j][i]);
            }
            transpose.push_back(temp);
        }
        return transpose;
    }
};
