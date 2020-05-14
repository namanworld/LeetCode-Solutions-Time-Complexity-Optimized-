class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> dist(seats.size(), INT_MAX);
        int curr = INT_MAX;
        for(int i=0; i<dist.size(); i++){
            if(seats[i]) curr = -1;
            dist[i] = curr == INT_MAX ? INT_MAX : ++curr;
        }
        curr = INT_MAX;
        for(int i=dist.size()-1; i>=0; i--){
            if(seats[i]) curr = -1;
            dist[i] = curr == INT_MAX ? min(curr, dist[i]) : min(++curr, dist[i]);
        }
        
        for(int i=0; i<dist.size(); i++) cout<<dist[i]<<" ";
        
        int currMax = 0;
        for(int i=0; i<dist.size(); i++){
            if(dist[i] == INT_MAX) continue;
            currMax = max(currMax, dist[i]);
        }
        return currMax;
    }
};

BETTER APPROACH:

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int prev = -1, future = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(seats[i]==1) prev = i;
            else{
                while(future<n && seats[future]==0 || future<i) future++;
                
                int left = prev == -1 ? n : i-prev;
                int right = future == n ? n : future-i;
                ans = max(ans, min(left, right));
            }
        }
        return ans;
    }
};

BETTER :
class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int ans = 0;
        int k = 0;
        
        for(int i=0; i<n; i++){
            if(seats[i]==1) k=0;
            else{
                k++;
                ans = max(ans, (k+1)/2);
            }
        }
        cout<<ans;
        for(int i=0; i<n; i++){
            if(seats[i]==1){
                ans = max(ans, i);
                break;
            }
        }
        
        for(int i=n-1; i>=0; i--){
            if(seats[i]==1){
                ans = max(ans, n-i-1);
                break;
            }
        }
        
        return ans;
    }
};
