class Solution {
public:
    int maxArea(int h, int w, vector<int>& hC, vector<int>& vC) {
        sort(hC.begin(), hC.end());
        int hs = hC.size();
        sort(vC.begin(), vC.end());
        int vs = vC.size();
        int maxH = 0, curr = 0;
        for(int i=0; i<hs; i++){
            maxH = max(maxH, hC[i]-curr);
            curr = hC[i];
        }
        maxH = max(maxH, h-hC[hs-1]);
        int maxV = 0;
        curr =0;
        for(int i=0; i<vs; i++){
            maxV = max(maxV, vC[i]-curr);
            curr = vC[i];
        }
        maxV = max(maxV, w-vC[vs-1]);
        return (long long)maxH*maxV%(1000000007);
    }
};
