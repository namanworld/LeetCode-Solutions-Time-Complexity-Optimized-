#include <bits/stdc++.h>
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, bool> check;
        for(int c:arr){
            if(check.count(2*c)>0) return true;
            else if(c%2==0 && check.count(c/2)>0) return true;
            check[c] = true;
        }
        return false;
    }
};
