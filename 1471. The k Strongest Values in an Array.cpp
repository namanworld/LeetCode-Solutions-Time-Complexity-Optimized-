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

class Solution {
public:
    int median;
    bool compare(int a, int b){
        return abs(a-median)>abs(median-b) || ((abs(a-median)==abs(median-b)) && a>b);
    }
    
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        median = arr[(arr.size()-1)/2];
        sort(arr.begin(), arr.end(), [this](int a, int b){
           return compare(a,b); 
        });
        return vector<int>(arr.begin(), arr.begin()+k);
    }  
};
