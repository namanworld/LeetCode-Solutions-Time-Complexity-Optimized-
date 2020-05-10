class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int i=0, j=numbers.size()-1;
        while(i<=j){
            if(numbers[i] + numbers[j] == target){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            else if(numbers[i] + numbers[j] > target) j--;
            else i++;
        }
        return res;
    }
};


BETTER APPROACH
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0, r = n-1;
        while (l<r) {
            if (numbers[l] + numbers[r]==target) return {l+1, r+1};
            else if (numbers[l] + numbers[r] > target) r--;
            else l++;
        }
        return {};
    }
};
