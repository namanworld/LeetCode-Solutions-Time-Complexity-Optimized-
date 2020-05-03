class Solution {
public:
    int frequency(string s){
        int alpha[26]={0};
        for(auto x:s){
            alpha[x-'a']++;
        }
        for(int i=0; i<26; i++){
            if(alpha[i]!=0) return alpha[i];
        }
        return 0;
    }
    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> wordsFreq(words.size());
        for(auto x:words){
            wordsFreq.push_back(frequency(x));
        }
        sort(wordsFreq.begin(), wordsFreq.end());
        vector<int> res;
        for(int i=0;i<queries.size(); i++){
            int s = 0, e = wordsFreq.size()-1;
            int currCount = frequency(queries[i]);
            while(s<=e){
                int mid = s+(e-s)/2;
                if(wordsFreq[mid]>=currCount){
                    res.push_back(i+1);
                    break;
                }
                else{
                    s = mid+1;
                }
            }
        }
        return res;
    }
};
