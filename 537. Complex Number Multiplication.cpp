#include <bits/stdc++.h>
class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        bool negFirsta = false, negSeca = false;
        bool negFirstb = false, negSecb = false;
        
        if(a[0]=='-') {
            negFirsta = true;
            a = a.substr(1);
        }
        if(b[0]=='-') {
            negFirstb = true;
            b = b.substr(1);
        }
        int af,as,bf,bs;
        af = stoi(a),bf = stoi(b);
        int digaf=0,digbf=0;
        if(af) digaf = 1+log10(af);
        if(bf) digbf = 1+log10(bf);
        a = a.substr(digaf+1);
        b = b.substr(digbf+1);
        if(a[0]=='-') {
            negSeca = true;
            a = a.substr(1);
        }
        if(b[0]=='-') {
            negSecb = true;
            b = b.substr(1);
        }
        as = stoi(a),bs = stoi(b);
        
        if(negFirsta) af = -1*af;
        if(negFirstb) bf = -1*bf;
        if(negSeca) as = -1*as;
        if(negSecb) bs = -1*bs;
        cout<<af<<" "<<as<<" "<<bf<<" "<<bs; 
        int l = af*bf - as*bs;
        int r = af*bs + as*bf;
        return to_string(l) + "+" + to_string(r) + 'i';
    }
};
