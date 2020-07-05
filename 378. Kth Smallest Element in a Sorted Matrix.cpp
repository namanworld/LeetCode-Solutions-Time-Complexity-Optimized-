class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        for(int i=0; i<matrix.size(); ++i){
            for(int j=0; j<matrix[0].size(); ++j){
                res.push_back(matrix[i][j]);
            }
        }
        sort(res.begin(), res.end());
        return res[k-1];
    }
};

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(int i=0; i<matrix.size(); ++i){
            for(int j=0; j<matrix[0].size(); ++j){
                if(pq.size()<k) pq.push(matrix[i][j]);
                else if(pq.top()>matrix[i][j]){
                    pq.pop();
                    pq.push(matrix[i][j]);
                }
            }
        }
        return pq.top();
    }
};
