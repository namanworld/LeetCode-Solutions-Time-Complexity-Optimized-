class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int> lastOcc;
        for(int i=0; i<s.length(); i++){
            lastOcc[s[i]] = i;
        }
        
        int toTake = -1;
        vector<int> partitions;
        int start = 0;
        for(int i=0; i<s.length(); i++){
            toTake = max(toTake, lastOcc[s[i]]);
            if(toTake == i) {
                partitions.emplace_back(toTake-start+1);
                start = i+1;
            }
        }
        
        return partitions;
    }
};
