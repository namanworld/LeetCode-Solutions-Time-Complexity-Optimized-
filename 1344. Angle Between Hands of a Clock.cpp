class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minAngle = minutes*6;
        double hrAngle = (hour%12)*30 + (1.0*minutes/60)*30;
        return min(abs(minAngle-hrAngle),360-abs(minAngle-hrAngle)); 
    }
};
