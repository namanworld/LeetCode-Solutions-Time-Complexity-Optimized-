class Solution {
public:
    int getSum(int a, int b) {
        string s = "", t = "", ans = "";
        for(int i=31;i>=0;i--){
            int k1 = a>>i;
            if(k1&1) s+='1';
            else s+='0';
            int k2 = b>>i;
            if(k2&1) t+='1';
            else t+='0';
            
        }
        int c = 0;
        int i = s.size()-1, j = t.size()-1;
        while(i>=0 || j>=0 || c==1){
            c += ((i>=0) ? s[i]-'0' : 0);
            c += ((j>=0) ? t[j]-'0' : 0);
            ans = char(c%2 + '0')+ans;
            c/=2;
            i--, j--;
        }cout<<ans;
        
        string num = ans;
        long dec = 0, base = 1, len = ans.size()-1;
        for(int i=len; i>=0; i--){
            if(num[i]=='1') dec+=base;
            base*=2;
        }
        return dec;                
    }
};

BETTER APPROACH

class Solution {
public:

    int getSum(int a, int b) {
        long long carry;
         while (b != 0) {
            carry = a & b;
            a = a ^ b;
            b = ((carry & 0xffffffff) << 1); // limited to 32 bits
        }
        return a;
    }
    
//     No use but  just so you know
    int sub(int a ,int b){
        while(b>0){
            int borrow  = (~a)&b;
            a = a^b;
            b = borrow<<1;
        }
        return a;
    }
    
};
