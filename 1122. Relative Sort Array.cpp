Runtime: 4 ms, faster than 90.34% of C++ online submissions for Relative Sort Array.
Memory Usage: 7.8 MB, less than 100.00% of C++ online submissions for Relative Sort Array.

class Solution {
public:
    
        
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> record;
        
        for(auto n : arr1){
            record[n]++;
        }
        int i = 0;
        for(auto n : arr2){
            while(record[n]-- > 0){
                arr1[i++] = n;
            }
        }
        
        for(auto r: record){
            while(r.second-- > 0){
                arr1[i++] = r.first;
            }
        }
        
        return arr1;
    }
};
