class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        if(employees.size()==0) return 0;
        int importance = 0;
        for(auto x:employees){
            if(x->id == id){
                importance+=x->importance;
                for(int i=0; i<x->subordinates.size(); i++){
                    importance+=getImportance(employees, x->subordinates[i]);
                }
            }
        }
        return importance;
    }
};


class Solution {
public:
    unordered_map<int, Employee*> emap;
    int getImportance(vector<Employee*> employees, int id) {
        for(auto e:employees) emap[e->id]=e;
        return dfs(id);
    }
    
    int dfs(int id){
        Employee* e = emap[id];
        int ans = e->importance;
        for(int sid:e->subordinates){
            ans+=dfs(sid);
        }
        return ans;
    }
};
