class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int curr = 1, i = digits.size()-1;
        vector<int> res;
        while(i>=0 || curr>0){
            if(i>=0) curr+=digits[i];
            res.push_back(curr%10);
            curr/=10;
            i--;
        }
        for(i; i>=0; i--) res.push_back(digits[i]);
        reverse(res.begin(), res.end());
        return res;
        
    }
};
