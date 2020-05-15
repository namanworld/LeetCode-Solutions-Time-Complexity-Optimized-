BEST APPROACH:
int count = 0;
        int len = arr.size();
        for (int j = 0; j < len; j++) 
        {
            int leftSmaller = 0, rightLarger = 0;
            int leftLarger = 0, rightSmaller = 0;
            for (int i = 0; i < j; i++) 
            {
                if (arr[i] < arr[j]) leftSmaller++;
                else if (arr[i] > arr[j]) leftLarger++;
            }
            for (int k = j + 1; k < len; k++)
            {
                if (arr[j] < arr[k]) rightLarger++;
                else if (arr[j] > arr[k]) rightSmaller++;
            }
            count += leftSmaller * rightLarger + leftLarger * rightSmaller;
        }
        return count;

BRUTE FORCE:
class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int count = 0, n = rating.size();
        if(n<=2) return 0;
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                for(int k=j+1; k<n; k++){
                    if(rating[i]<rating[j] && rating[j]<rating[k]) count++;
                    if(rating[i]>rating[j] && rating[j]>rating[k]) count++;
                }
        return count;
    }
};

