class Solution {
public:    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color = image[sr][sc];
        if(color!=newColor) dfs(image, sr, sc, color, newColor);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int r, int c, int color, int newColor ){
        if(image[r][c] == color){
            image[r][c] = newColor;
            if (r >= 1) dfs(image, r-1, c, color, newColor);
            if (c >= 1) dfs(image, r, c-1, color, newColor);
            if (r+1 < image.size()) dfs(image, r+1, c, color, newColor);
            if (c+1 < image[0].size()) dfs(image, r, c+1, color, newColor);
        }
    }
};

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
