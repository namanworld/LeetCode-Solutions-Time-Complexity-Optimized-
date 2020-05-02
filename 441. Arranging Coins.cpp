Runtime: 0 ms, faster than 100.00% of C++ online submissions for Arranging Coins.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Arranging Coins.

#include <bits/stdc++.h>
    typedef long long ll ;
    int arrangeCoins(int n) {
        ll num = n;
        ll root = (ll)sqrt(2*num);
        if(root*(root+1)==2*num) return root;
        else if(root*(root+1)>2*num) return root-1;
        else return root;
    }
};
