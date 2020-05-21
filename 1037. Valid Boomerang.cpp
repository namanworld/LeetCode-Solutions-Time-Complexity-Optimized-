class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        return abs((points[0][0]-points[2][0])*(points[1][1]-points[0][1])-(points[0][0]-points[1][0])*(points[2][1]-points[0][1]));
    }
};

double a1 = 0;
      double a2 = 0;
      
      if(points[0][0]<points[1][0]) {
        a1 = double(points[0][0] - points[1][0]) / double(points[0][1] - points[1][1]);
      }else{
        a1 = double(points[1][0] - points[0][0]) / double(points[1][1] - points[0][1]);
      }
      if(points[0][0]<points[2][0]) {
        a2 = double(points[0][0] - points[2][0]) / double(points[0][1] - points[2][1]);
      }else{
        a2 = double(points[2][0] - points[0][0]) / double(points[2][1] - points[0][1]);
      }
      
      if(points[0][0] - points[1][0]==0&&points[0][1] - points[1][1]==0) return false;
      if(points[0][0] - points[2][0]==0&&points[0][1] - points[2][1]==0) return false;
      
      if(a1==a2) return false;
      
      return true;
