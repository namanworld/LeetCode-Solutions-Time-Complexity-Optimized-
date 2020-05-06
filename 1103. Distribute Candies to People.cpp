class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> candy(num_people, 0);
        int currCandy = 1, i=0;
        while(candies>0){
            if(currCandy > candies) currCandy = candies;
            candies-=currCandy;
            candy[i++%num_people] += currCandy++;
        }
        return candy;
    }
};
