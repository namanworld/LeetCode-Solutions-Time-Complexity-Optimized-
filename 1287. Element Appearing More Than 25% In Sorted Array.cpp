class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int> options = {arr[arr.size()/4], arr[arr.size()/2], arr[3*arr.size()/4]};
        for(auto c:options){
            auto s = lower_bound(arr.begin(), arr.end(), c);
            auto e = upper_bound(arr.begin(), arr.end(), c);
            if(e-s > arr.size()/4) return c;
        }
        return -1;
    }
};

ALTERNATE APPROACH-

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
                count++;
          
            else
                count=1;
              if(count>(arr.size()/4))
                return arr[i];
        }
        return 1;
    }
};
auto x = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
