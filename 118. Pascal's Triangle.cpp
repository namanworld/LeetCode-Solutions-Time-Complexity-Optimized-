Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.8 MB, less than 100.00% of C++ online submissions for Pascal's Triangle.

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==0) return ans;
        ans.push_back({1});
        if(numRows==1) return ans; 
        int i=2;
        while(i<=numRows){
            vector<int> temp;
            temp.push_back(1);
            int j=0;
            while(j < ans[i-1-1].size()-1){
                temp.push_back(ans[i-1-1][j]+ans[i-1-1][j+1]);
                j++;
            }
            temp.push_back(1);
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};
