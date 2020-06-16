class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5=0, count10=0;
        for(int i:bills){
            int rem = i-5;
            if(rem==0) count5++;
            else if(rem==5){
                if(count5==0) return false;
                else count5--;
                count10++;
            }
            else if(rem==15){
                if(count10>0 && count5>0){
                    count10--, count5--;
                }
                else if(count5>2) count5-=3;
                else return false;
            }
        }
        return true;
    }
};
