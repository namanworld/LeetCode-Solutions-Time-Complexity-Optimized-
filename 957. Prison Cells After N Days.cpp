class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        map<string, int> mp;
        for(int i=0; i<N; i++){
            string s(cells.begin(), cells.end());
            if(mp.count(s) > 0){
                int loop_length = i - mp[s];
                int remDays = (N - i)%loop_length;
                return prisonAfterNDays(cells, remDays);
            }
            else{
                mp[s] = i;
                
                vector<int> cell2((int)cells.size(), 0);
                for(int j=1; j<7; j++){
                    cell2[j] = cells[j-1] == cells[j+1];
                }
                
                cells = cell2;
            }
        }
        return cells;
    }
};
