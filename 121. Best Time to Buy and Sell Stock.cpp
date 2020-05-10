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


NAIVE APPROACH
class Solution {
public:
    #include <bits/stdc++.h>
    int maxProfit(vector<int>& prices) {
        int currMin = INT_MAX;
        int currMax = INT_MIN;
        int currProfit = 0;
        for(int i=0; i<prices.size(); i++){
            if(currMin > prices[i]) {
                currMin = prices[i];
                currMax = INT_MIN;
            }
            if(currMin != INT_MAX && prices[i] > currMax){
                currMax = prices[i];
            }
            if(currMax - currMin > currProfit) currProfit = currMax - currMin;
        }
        if(currMax != INT_MIN) return currProfit;
        else return 0;
    }
};

O(N) APPROACH
class Solution {
public:
    #include <bits/stdc++.h>
    int maxProfit(vector<int>& prices) {
        int currMin = INT_MAX;
        int currProfit = 0;
        for(int i=0; i<prices.size(); i++){
            if(currMin > prices[i]) {
                currMin = prices[i];
            }
            else if(prices[i] > currProfit + currMin){
                currProfit = prices[i] - currMin;
            }
        }
        return currProfit;
    }
};
