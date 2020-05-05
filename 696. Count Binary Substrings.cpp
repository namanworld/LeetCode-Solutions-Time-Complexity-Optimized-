auto speedup=[](){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cerr.tie(0);
    return 0;
}();

class Solution {
public:
    int occurance(string s, string t){
        int count = 0;
        for(int i=0; i<t.size()-1; i++){
            if(s==t.substr(i,s.size())) count++;
        }
        
        return count;
    }
    
    int countBinarySubstrings(string s) {
        if(s.size()==0) return 1;
        string s0 = "";
        string s1 = "";
        
        for(auto c:s){
            if(c=='0') s0+=c;
            else s1+=c;
        }
        
        long long count = 0;
        for(int i=0; i<s0.size()&&i<s1.size() ; i++){
            string temp1 = s0.substr(0,i+1)+s1.substr(0,i+1);
            string temp2 = s1.substr(0,i+1)+s0.substr(0,i+1);
            long long currCount = occurance(temp1, s)+occurance(temp2, s);
            if(currCount==0) break;
            count+=currCount;
        }
        return count;
    }
};
