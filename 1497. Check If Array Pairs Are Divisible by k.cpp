class Solution {
public:
    bool canArrange(vector<int>& a, int k) {
        int n = a.size();
        vector<int> freq(k,0);
        for(int i=0;i<n;i++)
        {
            int rem = a[i]%k;
            if(rem<0)
                rem += k;
            freq[rem]++;
        }
        
        if(freq[0]%2!=0 || (k%2==0 && freq[k/2]%2!=0))
            return false;
        
        for(int i=1;i<=k/2;i++)
            if(freq[i]!=freq[k-i])
                return false;
        
        return true;
    }
};
