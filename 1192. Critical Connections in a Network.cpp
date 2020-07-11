class Solution {
public:
    void findBridges(int curr, int &timer, vector<vector<int>> &g, vector<bool>& vis, vector<int>& ids,
                    vector<int>& disc, vector<vector<int>>& bridges, int parent = -1){
        //Mark as visited
        vis[curr] = true;
        disc[curr] = ids[curr] = timer++;
        
        for(int v: g[curr]){
            if(!vis[v]) {
                findBridges(v, timer, g, vis, ids, disc, bridges, curr);
                // check if the subtree has a back edge with discovery time lesser than current vertex
                ids[curr] = min(ids[curr], ids[v]);
                if(ids[v] > disc[curr]) bridges.emplace_back(vector<int>{curr, v});
            }
            else if(vis[v] && parent != v)
                ids[curr] = min(ids[curr], disc[v]);
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        //Create graph:
        vector<vector<int> > g(n);
        for(const auto& edge: connections){
            g[edge[0]].emplace_back(edge[1]);
            g[edge[1]].emplace_back(edge[0]);
        }
        
        //Finding bridges
        int timer = 1;
        vector<bool> vis(n, false);
        vector<int> ids(n, INT_MAX);
        vector<int> disc(n, -1);
        vector<vector<int> > bridges;
        
        for(int i=0; i<n; i++){
            if(!vis[i]) findBridges(i, timer, g, vis, ids, disc, bridges);
        }
        
        return bridges;
    }
};
