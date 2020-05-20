class Solution {
public:
    bool isRectangleOverlap(vector<int>& rect1, vector<int>& rect2) {
        return !(rect1[0]>=rect2[2] || rect1[2]<=rect2[0] || rect1[1]>=rect2[3] || rect1[3]<=rect2[1]);
    }
};
