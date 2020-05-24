class Solution {
public:
    bool isVowel(char &a){
        return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
    }
    
    int maxVowels(string s, int k) {
        int ans = 0, cur = 0;
        int lo = 0, hi = 0;
        while(hi < s.size()){
            if(isVowel(s[hi])){
                cur++;
                ans = max(cur, ans);
            }
            hi++;
            if(hi - lo >= k){
                if(isVowel(s[lo])){
                    cur--;
                }
                lo++;
            }
        }
        return ans;
    }
};
