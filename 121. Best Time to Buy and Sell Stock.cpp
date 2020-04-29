class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0)
            return 0;
        int last = prices.size()-1, minVal = prices[last],maxVal = prices[last], result = 0;
        for(int i=last-1; i>=0; --i){
            if(prices[i] > maxVal){
			   /* If max is found then reset min so we might get new answer further down the array*/
                result = max(result,maxVal-minVal);
                maxVal = prices[i];
                minVal = INT_MAX;
            }else if(prices[i] < minVal){
                minVal = prices[i];
            }
        }
        
        return max(result,maxVal-minVal);
    }
};
