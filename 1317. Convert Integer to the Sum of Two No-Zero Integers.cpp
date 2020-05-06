class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> nozero;
        for(int i=1;n>0; i++){
            string currN = to_string(n-i);
            if(currN.find('0')==string::npos){
                string nextN = to_string(i);
                if(nextN.find('0')==string::npos){
                    nozero.push_back(i);
                    nozero.push_back(n-i);
                    return nozero;
                }
            }
        }
        return nozero;
    }
};
