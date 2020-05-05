class Solution {
public:
    #include <bits/stdc++.h>
    bool buddyStrings(string A, string B) {
        if(A.size()!=B.size()) return false;
        if(A==B){
            int alpha[26]={0};
            for(auto x:A){
                alpha[x-'a']++;
            }
            for(int c:alpha){
                if(c>1) return true;
            }
            return false;
        }
        else{
            int a=-1, b=-1;
            for(int i=0; i<A.size(); i++){
                if(A[i]!=B[i]){
                    if(a==-1) a=i;
                    else if(b==-1) b=i;
                    else return false;
                }
            }
            return b!=-1 && A[a]==B[b] && A[b]==B[a];
        }
    }
};
