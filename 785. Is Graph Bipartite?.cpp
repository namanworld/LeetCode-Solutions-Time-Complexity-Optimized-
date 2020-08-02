class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        if(graph.empty()) return true;
        vector<int> v;
        set<int> s[2];
        for(int i=0; i<graph.size(); i++){
            if(s[0].count(i)>0 && s[1].count(i)>0) return false;
            else{
                int t;
                if(s[0].count(i)==0 && s[1].count(i)==0) t = 0;
                else if(s[0].count(i)>0) t = 0;
                else t = 1;
                
                v.push_back(i);
                s[t].insert(i);
                while(!v.empty()){
                    int temp = v.back();
                    v.pop_back();
                    int currSet = s[0].count(temp)>0 ? 0 : 1;
                    s[currSet].insert(temp);
                    for(auto c: graph[temp]){
                        if(s[0].count(c)==0 && s[1].count(c)==0) {
                            s[1-currSet].insert(c);
                            v.push_back(c);
                        }
                        else if(s[currSet].count(c)>0) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
