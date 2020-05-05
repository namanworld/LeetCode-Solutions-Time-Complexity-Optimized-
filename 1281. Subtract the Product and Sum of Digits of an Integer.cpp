class Solution {
public:
    #include <bits/stdc++.h>
    int subtractProductAndSum(int n) {
        string num = to_string(n);
        long long mul = 1;
        long long sum = 0;
        for(int i=0; i<num.size(); i++){
            string s = "";
            s+=num[i];
            int curr = stoi(s);
            mul = mul*curr;
            sum = sum+curr;
        }
        return mul-sum;
    }
};
