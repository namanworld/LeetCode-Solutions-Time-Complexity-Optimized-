class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> res;
        int n=0;
        for(int c:A){
            if(c==0) n*=2;
            else n = n*2 + 1;
            n = n%10;
            if(n%5==0) res.push_back(1);
            else res.push_back(0);
        }
        return res;
    }
};

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> result;
        int result_so_far = 0;
        for (auto i: A){
            result_so_far = (result_so_far*2 + i)%5;
            result_so_far%5==0? result.push_back(true): result.push_back(false);
        }
        return result;
    }
};
