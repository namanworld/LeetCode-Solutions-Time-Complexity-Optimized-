class RLEIterator {
public:
    vector<int> temp;
    int i=0, q=0;
    RLEIterator(vector<int>& A) {
        temp = A;
    }
    
    int next(int n) {
        if(i>=temp.size()) return -1;
        if(n>temp[i]||temp[i]==0){
            n-=temp[i];
            temp[i]=0;
            i+=2;
            return next(n);
        }
        temp[i]-=n;
        return temp[i+1];

        
    }
};


SOLUTION 2:
class RLEIterator {
public:
    vector<int> temp;
    int i=0, q=0;
    RLEIterator(vector<int>& A) {
        temp = A;
    }
    
    int next(int n) {
        while(i<temp.size()){
            if(q+n>temp[i]){
                n-=temp[i]-q;
                q=0;
                i+=2;
            }
            else{
                q+=n;
                return temp[i+1];
            }
        }
        return -1;
    }
};
