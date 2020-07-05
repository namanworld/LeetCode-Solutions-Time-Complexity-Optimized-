class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        if(matrix.empty()) return 0;
        int left = matrix[0][0];
        int right = matrix[n-1][n-1];
        while(left<right){
            int mid = left+(right-left)/2;
            int count = 0;
            for(int i=0; i<n; i++){
                count+=upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if(count<k) left = mid+1;
            else right = mid;
        }
        return left;
    }
};

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
