class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        map<pair<int, int>, int> mp;
        int maxP = 0, currMax, vertical, same;
        
        for(int i=0; i<points.size(); i++){
            same = vertical = currMax = 0;
            for(int j=i+1; j<points.size(); ++j){
                if(points[i] == points[j]) same++;
                else if(points[i][0] == points[j][0]) vertical++;
                else{
                    int yDiff = points[i][1] - points[j][1];
                    int xDiff = points[i][0] - points[j][0];
                    int g = __gcd(yDiff, xDiff);
                    
                    yDiff /= g;
                    xDiff /= g;
                    
                    mp[{yDiff, xDiff}]++;
                    currMax = max(currMax, mp[{yDiff, xDiff}]);
                }
                currMax = max(currMax, vertical);
            }
            maxP = max(maxP, currMax + same + 1);
            mp.clear();
        }
        return maxP;
    }
};
