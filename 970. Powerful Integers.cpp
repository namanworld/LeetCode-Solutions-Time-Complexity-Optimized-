#include <bits/stdc++.h>

auto speedup = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> a,b;
        set<int> ans;
        int i=0;
        while(pow(x,i)<bound)
        {
            a.push_back(pow(x,i));
            if(x==1) break;
            i++;
        }
        i=0;
         while(pow(y,i)<bound)
        {
            b.push_back(pow(y,i));
             if(y==1) break;
             i++;
        }

        for(i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[i]+b[j]<=bound)
                {
                    ans.insert(a[i]+b[j]);
                }
                else
                {    
                    break;
                }
            }
        }
        vector<int> v(ans.begin(),ans.end());
        return v;
    }
};
