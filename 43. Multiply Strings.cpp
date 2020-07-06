#include <bits/stdc++.h>
class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.length(), n2 = num2.length();
        char arr[n1+n2];
        memset(arr, '0', sizeof(arr));
        
        for(int j=n2-1; j>=0; j--){
            for(int i=n1-1; i>=0; i--){
                int product = (num1[i]-'0')*(num2[j]-'0');
                int temp = arr[i+j+1]-'0'+product;
                arr[i+j+1] = (char)(temp%10 + '0');
                arr[i+j] = (char)((arr[i+j]-'0'+temp/10)+'0');
            }
        }
        
        string res="";
        bool seen = false;
        
        for(auto c:arr){
            if(c=='0' && !seen) continue;
            res+=c;
            seen = true;
        }
        
        return res.length()>0 ? res : "0";
    }
};
