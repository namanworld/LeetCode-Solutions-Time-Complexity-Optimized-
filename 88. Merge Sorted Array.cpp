class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(!m && !n) return;
        if(!m && n){
            nums1 = nums2;
            return;
        }
        if(m && !n) return;
        
        int k = m+n-1, i = m-1,j = n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else nums1[k--] = nums2[j--];
        }
        
        while(i>=0) nums1[k--] = nums1[i--];
        while(j>=0) nums1[k--] = nums2[j--];
    }
};


BETTER:
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        
        while (j >= 0)
        {
            int target = i + j + 1;
            
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[target] = nums1[i];
                i--;
            }
            else
            {
                nums1[target] = nums2[j];
                j--;
            }
            
            target--;
        }
    }
};
