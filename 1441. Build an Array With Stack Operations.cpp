class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int i=1,j=0;
        while(j<target.size()&&target[j]<=n){
            if(target[j]!=i){
                res.push_back("Push");
                res.push_back("Pop");
                i++;
            }
            else{
                res.push_back("Push");
                if(target[j]==n) break;
                j++,i++;
            }
        }
        return res;
    }
};
