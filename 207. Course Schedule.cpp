class Solution {
public:
    list<int> * adj;
    int *vis;
    
    bool dfs(int i){
        if(vis[i]==1) return 1;
        if(vis[i]==2) return 0;
        vis[i] = 1;
        for(auto it: adj[i]){
            if(dfs(it)) return 1;
        }
        vis[i] = 2;
        return 0;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        adj = new list<int>[numCourses];
        vis = new int[numCourses]();
        
        for(vector<int> v: prerequisites){
            adj[v[1]].push_back(v[0]);
        }
        
        for(int i=0; i<numCourses; i++){
            if(!vis[i] && dfs(i)) return false;
        }
        
        return true;
    }
};
