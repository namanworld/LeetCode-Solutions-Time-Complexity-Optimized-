class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
        vector<vector<int>> res;
        
        int t = 0;
        res.push_back({r0, c0});
        if(R*C == 1) return res;
        t++;
        
        for(int k=1; k<2*(R+C); k+=2)
            for(int i=0; i<4; i++){
                int steps = k+(i/2);
                for(int j=0; j<steps; ++j){
                    r0+=dir[i][0];
                    c0+=dir[i][1];
                    if(r0>=0 && r0<R && c0>=0 && c0<C){
                        res.push_back({r0, c0});
                        t++;
                        if(t==R*C) return res;
                    }
                }
            }
        return {};
        
    }
};
