##Sorting Approach Oclass Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int x: nums){
            s.insert(x);
        }

        int maxAns = 0;
        
        for(int x: nums){
            if(s.find(x-1)==s.end()){
                int y = x;
                int currLength = 1;
                
                while(s.find(y+1)!=s.end()){
                    y++;
                    currLength++;
                }
                
                maxAns = max(maxAns, currLength);
            }
        }
        
        return maxAns;
    }
};(NlogN)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxLength = 1, currLength = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1] == 1) currLength++;
            else if (nums[i]==nums[i-1]) continue;
            else currLength =1;
            maxLength = max(maxLength, currLength);
        }
        
        return nums.size() > 0 ? maxLength : 0;
    }
};

Using Hashing O(N):
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int x: nums){
            s.insert(x);
        }

        int maxAns = 0;
        
        for(int x: nums){
            if(s.find(x-1)==s.end()){
                int y = x;
                int currLength = 1;
                
                while(s.find(y+1)!=s.end()){
                    y++;
                    currLength++;
                }
                
                maxAns = max(maxAns, currLength);
            }
        }
        
        return maxAns;
    }
};
