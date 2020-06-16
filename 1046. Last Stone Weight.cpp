#include<bits/stdc++.h>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i:stones){
            pq.push(i);
        }
        int a, b;
        while(pq.size()>1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            if(a!=b){
                pq.push(a-b);
            }
        }
        return pq.size()>0 ? pq.top() : 0;
    }
};
