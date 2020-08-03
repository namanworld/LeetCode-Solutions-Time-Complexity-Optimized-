class Solution {
public:
    list<int>* adj;
    set<int> vis;
    int * found;
    stack<int> s;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        adj = new list<int>[numCourses];
        found = new int[numCourses]();
        
        for(auto &v: prerequisites){
            adj[v[1]].push_back(v[0]);
        }
        
        for(int i=0; i<numCourses; i++){
            if(vis.count(i)==0 && dfs(i)) {
                return {};
            }
        }
        
        vector<int> res;
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        
        return res;
    }
    
    bool dfs(int curr){
        if(found[curr]==1) return 1;
        if(found[curr]==2) return 0;
        vis.insert(curr);
        found[curr] = 1;
        for(int c: adj[curr]){
            bool ans = dfs(c);
            if(ans) return ans;
        }
        
        found[curr] = 2;
        s.push(curr);
        return 0;
    }
};
