O(N2)
class Solution {
public:
    #include <bits/stdc++.h>
    int countTriplets(vector<int>& arr) {
        arr.insert(arr.begin(), 0);
        for(int i=1; i<arr.size(); i++){
            arr[i]^=arr[i-1];
        }
        int count=0;
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1;j<arr.size(); j++){
                if(arr[i]==arr[j]) count+= j-i-1;
            }
        }
        return count;
    }
};


BRUTE FORCE (TLE)
class Solution {
public:
    #include <bits/stdc++.h>
    int countTriplets(vector<int>& arr) {
        vector<int> prexors;
        
        int j=0;
        for(int i=0; i<arr.size(); i++){
                j = arr[i]^j;
                prexors.push_back(j);
        }
        
        int count=0;
        for(int i=0; i<arr.size(); i++)
            for(int j=i+1; j<arr.size(); j++){
                for(int k=j;k<arr.size(); k++){
                    if(i==0){
                        if(j>0 && (prexors[j-1] == (prexors[k] ^ prexors[j-1] ))) {
                            cout<<i<<" "<<j<< " "<<k<<endl;
                            count++;
                        }
                    }
                    else{
                        if((prexors[i-1]^prexors[j-1]) == (prexors[k] ^ prexors[j-1])) {
                            count++;
                            cout<<i<<" "<<j<< " "<<k<<endl;
                            a++;
                        }
                    }
                }}
        return count;
    }
};
