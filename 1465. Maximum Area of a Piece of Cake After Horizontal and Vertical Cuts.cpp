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


BETTER:
int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
    sort(begin(hCuts), end(hCuts));
    sort(begin(vCuts), end(vCuts));
    auto max_h = max(hCuts[0], h - hCuts.back());
    auto max_v = max(vCuts[0], w - vCuts.back());
    for (auto i = 0; i < hCuts.size() - 1; ++i)
        max_h = max(max_h, hCuts[i + 1] - hCuts[i]);
    for (auto i = 0; i < vCuts.size() - 1; ++i)
        max_v = max(max_v, vCuts[i + 1] - vCuts[i]);        
    return (long)max_h * max_v % 1000000007;
}
