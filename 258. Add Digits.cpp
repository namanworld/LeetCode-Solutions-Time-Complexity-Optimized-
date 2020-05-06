O(1) Time complexity

class Solution {
public:
    #include <bits/stdc++.h>
    int addDigits(int num) {
        return 1 + (num-1)%9;
    }
};

O(size(N)) Approach
class Solution {
public:
    #include <bits/stdc++.h>
    int addDigits(int num) {
        while(num>9){
            string curr = to_string(num);
            int currN = 0;
            for(auto c:curr){
                currN+=int(c-'0');
            }
            num = currN;
        }
        return num;
    }
};
