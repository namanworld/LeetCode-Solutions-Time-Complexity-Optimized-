class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if(heights.size()==0) return 0;
        if(heights.size()==0) return heights[0];
        
        stack<int> s;
        s.push(0);
        int res = 0;
        
        for(int i=1; i<heights.size(); ++i){
            int curr = heights[i];
            if(curr >= heights[s.top()]) s.push(i);
            else{
                while(!s.empty() && curr < heights[s.top()]){
                    int temp = heights[s.top()];
                    s.pop();
                    if(s.empty()){
                        res = max(res, temp*i);
                    }
                    else{
                        res = max(res, temp*(i-s.top()-1));
                    }
                }
                s.push(i);
            }
        }
        
        if(!s.empty()){
            int i = heights.size();
            while(!s.empty()){
                    int temp = heights[s.top()];
                    s.pop();
                    if(s.empty()){
                        res = max(res, temp*i);
                    }
                    else{
                        res = max(res, temp*(i-s.top()-1));
                    }
            }
        }
        
        return res;
    }
};
