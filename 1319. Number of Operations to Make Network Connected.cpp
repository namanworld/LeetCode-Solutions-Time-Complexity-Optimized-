class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        
        map<int, list<int> > graph;
        
        for(auto c: connections){
            graph[c[0]].push_back(c[1]);
            graph[c[1]].push_back(c[0]);
        }
        
        vector<bool> visited(n, false);
        
        queue<int> q;
        
        int count = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]) {
                q.push(i);
                visited[i] = true;
                while(!q.empty()){
                    int curr = q.front();
                    q.pop();
                    for(int c: graph[curr]){
                        if(!visited[c]) {
                            visited[c] = true;
                            q.push(c);
                        }
                    }
                }
                count++;   
            }
        }
        
        return count - 1;
        
    }

};
