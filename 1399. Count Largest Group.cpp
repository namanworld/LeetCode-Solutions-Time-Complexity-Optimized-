class Solution {
public:
    #include <bits/stdc++.h>
    int countLargestGroup(int n) {
        map<int, int> groups;
        
        int maxSize = 0;
        for(int i=1;i<=n; i++){
            int num = i, sum = 0;
            while(num){
                sum+=num%10;
                num/=10;
            }
            groups[sum]++;
            maxSize = max(maxSize, groups[sum]);
        }
        
        int res=0;
        for(int i=1; i<37; i++){
            if(maxSize == groups[i]) res++;
        }
        
        return res;
    }
};
