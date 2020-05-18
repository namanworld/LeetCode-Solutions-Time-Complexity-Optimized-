BRUTEFORCE REVERSE METHOD:
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res;
        for(int i=0; i<n; i++) res.push_back(i+1);
        
        int count = 1, index = 1;
        while(count++<k){
            reverse(res.begin()+index++, res.end());
        }
        return res;
    }
};

BETTER APPROACH:
class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res(n);
        int count = 0;
        for(int i=1; i<n-k; i++){
            res[count++] = i;
        }
        
        for(int i=0; i<=k ; i++){
            res[count++] = (i%2==0) ? (n-k + i/2) : (n - i/2);
        }
        return res;
    }
};
