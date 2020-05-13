class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int m = (month>=3 && month<=10) ? month-2: month+10;
        int d = (m>=11) ? (year%100) - 1 : year%100;
        int c = year/100;
        int f = day + (13*m-1)/5 + d + d/4 + c/4 - 2*c;
        
        vector<string> weekdays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
                                   "Friday", "Saturday"};
        
        
        int weekday = f%7;
        cout<<weekday;
        if(weekday<0) weekday+=7;
        return weekdays[weekday];        
    }
};
