auto speedup = [](){
   std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alpha[26]={0};
        for(auto x:magazine){
            alpha[x-'a']++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            char x = ransomNote[i];
            if(alpha[x-'a']!=0){
                alpha[x-'a']--;
            }
            else return false;
        }
        return true;
    }
};
