class Solution {
public:
    #include <set>
    int distributeCandies(vector<int>& candies) {
        set<int> candy;
        for(int c:candies){
            candy.insert(c);
        }
        return min(int(candy.size()), int(candies.size()/2));
    }
};
