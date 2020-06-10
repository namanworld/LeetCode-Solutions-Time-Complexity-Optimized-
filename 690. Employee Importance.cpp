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
