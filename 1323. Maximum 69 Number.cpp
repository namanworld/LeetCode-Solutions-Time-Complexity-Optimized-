class Solution {
public:
    #include <bits/stdc++.h>
    #include <string> 
    int maximum69Number (int num) {
        string s = to_string(num);
        int nums[s.size()];
        int i=0;
        for (auto &c:s){
            nums[i++] = int(c-'0');
        }
        int index6 = -1;
        for(int i=0; i<s.size(); i++){
            if(index6==-1 && nums[i] == 6) {
                index6 = i;
                nums[i] = 9;
                break;
            }
        }
        if(index6 == -1) return num;
        else{
            int ans = 0;
            for(int i=0; i<s.size(); i++){
                ans = ans*10 + nums[i];
            }
            return ans;
        }
        return 0;
    }
};
