class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k==0) return num;
        if(k==num.length()) return "0";
        
        int i=0;
        while(k){
            if(i>0) i=i-1;
            while(i < num.length()-1 && num[i]<=num[i+1]) i++;
            num.erase(num.begin()+i);
            k--;
        }
        auto x = num.find_first_not_of("0");
        num.erase(0, x);
        if(num.length() == 0) return "0";
        else return num;
    }
};
