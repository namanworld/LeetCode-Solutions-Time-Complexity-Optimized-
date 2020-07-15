class Solution {
public:    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<map<int, double>> graph(n);
        for(int i=0; i<edges.size(); ++i){
            graph[edges[i][0]][edges[i][1]] = succProb[i];
            graph[edges[i][1]][edges[i][0]] = succProb[i];
        }
        
        vector<double> p(n, 0.0);
        
        p[start] = 1.0;
        queue<int> q;
        q.push(start);
        
        double res = 1.0;
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            
            for(auto &it : graph[temp]){
                int next = it.first;
                double prob = it.second;
                
                if(p[temp] * prob > p[next]){
                    q.push(next);
                    p[next] = p[temp] * prob;
                }
            }
        }
        
        return p[end];
    }
};
