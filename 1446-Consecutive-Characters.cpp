class Solution {
public:
    double angleClock(int hour, int minutes) {
       
        double minute_angle = minutes * 6.0;
        
        
        double hour_angle = (hour % 12) * 30.0 + minutes * 0.5;
        
        
        double angle = fabs(hour_angle - minute_angle);
        
      
        return angle > 180 ? 360 - angle : angle;
    }
};
