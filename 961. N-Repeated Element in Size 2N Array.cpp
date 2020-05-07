class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> map;
        int num = 0, maxC = 0;
        for(int i=0; i<A.size(); i++){
            map[A[i]]++;            
            if(map[A[i]]>maxC){
                num = A[i];
                maxC = map[A[i]];
            }
        }
        return num;
    }
};


BETTER APPROACH
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for(int i=1; i<=3; i++){
            for(int j=0; j<A.size()-i; j++){
                if(A[j] == A[j+i]) return A[j];
            }
        }
        return 0;
    }
};
