class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> res;
        vector<int> toCheck;
        for(int i=0; i<m; i++) toCheck.push_back(i+1);
        
        for(int c:queries){
            cout<<c<<endl;
            int index = 0;
            
            for(int i=0; i<m; i++){
                if(toCheck[i]==c) {
                    index = i;
                    break;
                }
            }
            
            res.push_back(index);
            toCheck.insert(toCheck.begin(), c);
            toCheck.erase(toCheck.begin()+index+1);
        }
        return res;
    }
};
