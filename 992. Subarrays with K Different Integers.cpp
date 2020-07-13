class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int k) {
        return atMost(A, k) - atMost(A, k-1);
    }
    
    int atMost(vector<int> &A, int k){
        if(A.size() == 0) return 0;
        map<int, int> mp;
        int i=0, res=0;
        for(int j=0; j<A.size(); ++j){
            if(!mp[A[j]]++) k--;
            while(k<0){
                if(!--mp[A[i]]) k++;
                i++;
            }
            res += j-i+1;
        }
        return res;
    }
};
