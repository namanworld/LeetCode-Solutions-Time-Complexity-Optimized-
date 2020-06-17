class Solution {
public:
    int distance(vector<int> a){
        return a[0]*a[0]+a[1]*a[1];
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        int n = points.size();
        vector<int> dist(n);
        for(int i=0; i<n; i++) dist[i] = distance(points[i]);
        sort(dist.begin(), dist.end());
        int distK = dist[K-1];
        
        vector<vector<int>> res;
        for(int i=0; i<n; i++){
            if(distance(points[i])<=distK) res.push_back(points[i]);
        }
        return res;
    }
};
