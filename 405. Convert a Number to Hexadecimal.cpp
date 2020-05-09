class Solution {
public:
    string toHex(int num) {
        if(num==0) return "0";
        unsigned int n = num;
        string hex = "";
        while(n){
            int rem = n%16;
            n = n/16;
            if(rem < 10) hex+=to_string(rem);
            else hex+=rem + 'a' - 10;
        }
        reverse(hex.begin(), hex.end());
        return hex;
    }
};
