class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        
        int * heights = new int[(int)matrix[0].size()]();
        int ans = 0;
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]=='0') heights[j] = 0;
                else heights[j]+=1;
            }
            ans = max(ans, area(heights, matrix[0].size()));
        }
        return ans;
    }
    
    int area(int * heights, int n){
        int ans = 0;
        
        stack<int> s;
        s.push(0);
        
        for(int i=1; i<n; i++){
            int curr = heights[i];
            if(curr >= heights[s.top()]) s.push(i);
            else{
                while(!s.empty() && curr < heights[s.top()]){
                    int temp = heights[s.top()];
                    s.pop();
                    if(s.empty()){
                        ans = max(ans, temp*i);
                    }
                    else{
                        ans = max(ans, temp*(i-s.top()-1));
                    }
                }
                s.push(i);
            }
        }
        
        if(!s.empty()){
            int i = n;
            while(!s.empty()){
                    int temp = heights[s.top()];
                    s.pop();
                    if(s.empty()){
                        ans = max(ans, temp*i);
                    }
                    else{
                        ans = max(ans, temp*(i-s.top()-1));
                    }
                }
        }
        
        return ans;
    }
};
