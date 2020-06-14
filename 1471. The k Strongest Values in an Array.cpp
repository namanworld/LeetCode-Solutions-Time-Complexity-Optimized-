class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0, j = n-1;
        int median = arr[(n-1)/2];
        while(k--){
            if(arr[j]-median >= median-arr[i]) j--;
            else i++;
        }
        arr.erase(arr.begin()+i, arr.begin()+j+1);
        return arr;
    }
    
    
    
};
