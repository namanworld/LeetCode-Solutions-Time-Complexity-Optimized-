#include <bits/stdc++.h>

auto speed = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();


class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(), A.end());
        int ans = -1;
        do{
            int hr = 10*A[0]+A[1], mins = 10*A[2]+A[3];
            if(hr<24 && mins<60){
                ans = max(ans, hr*60+mins);
            }
            
        }while(next_permutation(A.begin(), A.end()));
        
        if(ans<0) return "";
        string res="";
        if(ans/60<10) res+="0";
        res+=to_string(ans/60);
        res+=":";
        if(ans%60<10) res+="0";
        res+=to_string(ans%60);
        return res;
    }
};


BETTER APPROACH:
#include <bits/stdc++.h>

auto speed = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();


class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        int ans = -1;
        for(int i=0; i<4; i++)
            for(int j=0; j<4; j++)
                if(j!=i)
                    for(int k=0; k<4; k++)
                        if(k!=i && k!=j){
                            int l=6-i-j-k;
                            int hr = 10*A[i]+A[j];
                            int mins = 10*A[k]+A[l];
                            if(hr<24 && mins<60) ans = max(ans, 60*hr+mins);
                        }
        if(ans<0) return "";
        string res="";
        if(ans/60<10) res+="0";
        res+=to_string(ans/60);
        res+=":";
        if(ans%60<10) res+="0";
        res+=to_string(ans%60);
        return res;                       
    }
};
