class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty())
            return 0;
        int minval = prices[0];
        int maxval = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] < prices[i-1]) {
                if (maxval > minval) {
                    profit += (maxval - minval);
                }
                minval = prices[i];
                maxval = prices[i];
                continue;
            }
            maxval = prices[i];
        }
        profit += (maxval - minval);
        return profit;
    }
};

ALTERNATE:

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0, currProfit = 0, currPrice = prices[0];
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i+1]<prices[i]){
                if(i!=0){currProfit = prices[i] - currPrice;
                totalProfit += currProfit;}
                currPrice = prices[i+1];
            }
        }
        return max(totalProfit, totalProfit+prices[prices.size()-1]-currPrice);
    }
};


ALTERNATE:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0, currProfit = 0, currPrice = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){
                totalProfit+=prices[i]-prices[i-1];
            }
        }
        return totalProfit;
    }
};
