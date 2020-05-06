class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(left;left<=right;left++)
        {
            int n=left;
            int flag=1;
            while(flag&&n)
            {
                int a=n%10;
                n=n/10;
                if(a!=0&&left%a==0)
                {
                    flag=1;
                }
                else 
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                v.push_back(left);
            }
        }
        return v;
    }
};
