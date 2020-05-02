#include <bits/stdc++.h>

auto myru(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool jewel[256];
        memset(jewel, 0, sizeof(jewel));
        
        for(int i=0; i<J.size(); i++){
            char a = J[i];
            jewel[a] = true;
        }
        
        int count = 0;
        for(int i=0; i<S.size(); i++){
            if(jewel[S[i]]==true) count++;
        }
        return count;
    }
};
