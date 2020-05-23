class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> res;
        int n, s;
        res.push_back(label);
        while(label>1){
            n = floor(log2(label));
            s = pow(2,n);
            label = label - s;
            label/=2;
            s--;
            label = s - label;
            cout<<label<<" ";
            res.push_back(label);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
