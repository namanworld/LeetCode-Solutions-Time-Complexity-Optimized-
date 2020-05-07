class Solution {
public:
    #include <bits/stdc++.h>
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> indexes;
        for(int i=0; i<list1.size(); i++){
            indexes[list1[i]] = i;
        }
        int minSum = INT_MAX;
        for(int i=0; i<list2.size(); i++){
            if(indexes.count(list2[i])>0) {
                if(indexes[list2[i]]+i<minSum){
                    minSum = indexes[list2[i]]+i;
                }
            }
        }
        vector<string> v;
        for(int i=0; i<list2.size(); i++){
            if(indexes.count(list2[i])>0){
                if(indexes[list2[i]]+i==minSum) v.push_back(list2[i]);
            }
        }
        return v;
        
    }
};
