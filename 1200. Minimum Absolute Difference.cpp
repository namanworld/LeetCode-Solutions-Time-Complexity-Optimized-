class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int min = arr[1]-arr[0];
        ans.push_back({arr[0],arr[1]});
        for (int i=1;i<arr.size()-1;i++){
            if (min==arr[i+1]-arr[i]) ans.push_back({arr[i],arr[i+1]});
            if (arr[i+1]-arr[i]<min){
                min=arr[i+1]-arr[i];
                ans.clear();
                ans.push_back({arr[i],arr[i+1]});        
            }
        }
        return ans;
    }
};
