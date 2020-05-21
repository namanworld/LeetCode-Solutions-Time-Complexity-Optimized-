class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        
        while(i>=0 && j>=0){
            if(a[i]==b[j] && a[i]=='1'){
                if(carry) res+="1";
                else res+="0";
                carry = 1;
            }
            else if(a[i]==b[j] && a[i]=='0'){
                if(carry) res+="1";
                else res+="0";
                carry = 0;
            }
            else{
                if(carry) {
                    res+="0";
                    carry = 1;
                }
                else res+="1";
            }
            i--, j--;
        }
        
        while(i>=0&&j==-1){
            if(a[i]=='1' && carry){
                res+="0";
                carry = 1;
            }
            else if(a[i]=='0' && carry){
                res+="1";
                carry=0;
            }
            else{
                res+=a[i];
            }
            i--;
        }
        
        while(j>=0&&i==-1){
            if(b[j]=='1' && carry){
                res+="0";
                carry = 1;
            }
            else if(b[j]=='0' && carry){
                res+="1";
                carry=0;
            }
            else{
                res+=b[j];
            }
            j--;
        }
        
        if(carry){
            res+="1";
        }
        
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};
