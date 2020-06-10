class Solution {
public:
    int currColor;
    void fun(vector<vector<int>>& image, vector<vector<bool>> visited, int sr, int sc, int newColor,
            vector<vector<int>> &res){
        if(visited[sr][sc] || image[sr][sc]!=currColor) return;
        visited[sr][sc] = true;
        //cout<<sr<<" "<<sc<<endl;
        res[sr][sc] = newColor;
        int dir[4][2] = {{0,-1}, {-1, 0}, {0, 1}, {1, 0}};
        for(int k=0; k<4; k++){
            int nr = sr+dir[k][0];
            int nc = sc+dir[k][1];
            if(nr>=0 && nc>=0 && nr<image.size() && nc<=image[0].size() && !visited[nr][nc])
                fun(image, visited, nr,nc, newColor, res);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size();
        int n = image[0].size();
        currColor = image[sr][sc];
        vector<vector<bool> > visited(m,vector<bool>(n,false));
        vector<vector<int>> res(image);
        fun(image, visited, sr, sc, newColor, res);
        return res;
    }
};
