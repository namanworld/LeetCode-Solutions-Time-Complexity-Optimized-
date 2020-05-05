class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        int j=0;
        
        if(chars.size()<=1) return chars.size();
        
        for(int i=1; i<chars.size(); i++){
            if(chars[i]==chars[i-1]){
                count++;
            }
            if(i==chars.size()-1 || chars[i]!=chars[i-1]){
                chars[j++] = chars[i-1];
                char currChar = chars[i-1];
                if(count!=1){
                    cout<<count;
                    int rem = count%10;
                    while(count>=10){
                        chars[j++] = 48 + (count/10);
                            count/=10;
                    }
                    
                    chars[j++] = 48 + rem;
                }
                count = 1;
                if(i==chars.size()-1 && chars[i]!=currChar && count == 1){
                    if(j<chars.size()) chars[j++] = chars[i];
                }
            }
        }
        return j;
    }
};


BETTER APPROACH

class Solution {
public:
    int compress(vector<char>& chars) {
        int result=0,len=chars.size(),count=0,start=0;
        char anchor;
        for(int i=0;i<len;i++)
        {
            if((i+1<len&&chars[i]!=chars[i+1])||i+1==len)
            {
                cout<<i<<" "<<chars[i]<<" "<<start<<" "<<count<<endl;
                chars[count] = chars[start];
                if(i - start>0)
                {    
                    string temp = to_string(i+1-start);
                    for(int i=1;i<=temp.size();i++)
                        chars[count+i] = temp[i-1];
                    count+= temp.size() + 1;
                }
                else 
                    count+=1;
                
                start = i+1;
            }
        }
        chars.resize(count);
        return count;
    }
};
