class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length(), ans = 0;   
        for(int cen = 0; cen<=2*n+1; cen++){
            int left = cen/2;
            int right = left + cen%2;
            while(left>=0 && right<n && s[left]==s[right]){
                ans++;
                left--;
                right++;
            }
        }
        return ans;
    }
};
