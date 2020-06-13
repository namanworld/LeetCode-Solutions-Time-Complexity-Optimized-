static auto speedup =[](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}(); 

class Solution {
public:
    #include <bits/stdc++.h>   
    map<int,vector<int> > children;
    map<int, bool> visited;
    
    int dfs(int curr, int mycost, vector<bool>& hasApple){
        if(visited[curr]) return 0;
        visited[curr] = true;
        int childrenCost = 0;
        for(auto x:children[curr]){
            childrenCost+=dfs(x, 2, hasApple);
        }
        
        if(childrenCost==0 && hasApple[curr]==false) return 0;
        return childrenCost+mycost;
    }
        
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        for(int i=0; i<edges.size(); i++){
            children[edges[i][0]].push_back(edges[i][1]);
            children[edges[i][1]].push_back(edges[i][0]);
        }
        return dfs(0, 0, hasApple);
    }
};
