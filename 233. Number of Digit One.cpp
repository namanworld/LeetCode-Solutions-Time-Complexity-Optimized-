Won't give TLE: O(1) Solution:
class Solution {
public:
    int countDigitOne(int n) {
        int count = 0;
        for(long long i=1; i<=n; i*=10){
            long long div = i*10;
            int ans =(n/div)*i + min(max(n%div-i+1, 0LL), i);
            cout<<i<<' '<<ans<<endl;
            count+=ans;
        }
        return count;
    }
};


Will give TLE but simple to think of:
class Solution {
public:
    int countDigitOne(int n) {
        int count = 0;
        for(int i=1; i<=n; i++){
            string s = to_string(i);
            for(int j=0; j<s.length(); ++j){
                if(s[j]=='1') count++;
            }
        }
        return count;
    }
};
