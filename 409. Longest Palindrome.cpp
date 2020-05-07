class Solution {
public:
    int longestPalindrome(string s) {
        int alpha[128]={0};
        for(auto c:s){
            alpha[int(c)]++;
        }
        int sum=0;
        for(int i=0; i<128; i++){
            sum+=alpha[i]/2 * 2;
            if(sum%2==0 && alpha[i]%2==1) sum++;
        }
        return sum;
    }
};
