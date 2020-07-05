class Solution {
public:
    vector<vector<int> > res;
    void backtrack(int curr, vector<int> temp, vector<vector<int>> &graph){
        if(curr==graph.size()-1){
            res.push_back(temp);
            return;
        }
        
        for(int next: graph[curr]){
            temp.push_back(next);
            backtrack(next, temp, graph);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int curr = 0;
        vector<int> temp;
        temp.emplace_back(0);
        backtrack(0, temp, graph);
        return res;
    }
};
