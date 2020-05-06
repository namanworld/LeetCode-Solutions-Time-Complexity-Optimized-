class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='I'){
                if(i+1!=s.size() && s[i+1] =='V'){
                    n+=4;
                    i+=1;
                }
                else if(i+1!=s.size() && s[i+1] =='X'){
                    n+=9;
                    i+=1;
                }
                else n+=1;
            }
            else if(s[i]=='X'){
                if(i+1!=s.size() && s[i+1] =='L'){
                    n+=40;
                    i+=1;
                }
                else if(i+1!=s.size() && s[i+1] =='C'){
                    n+=90;
                    i+=1;
                }
                else n+=10;
            }
            else if(s[i]=='C'){
                if(i+1!=s.size() && s[i+1] =='D'){
                    n+=400;
                    i+=1;
                }
                else if(i+1!=s.size() && s[i+1] =='M'){
                    n+=900;
                    i+=1;
                }
                else n+=100;
            }
            else if (s[i]=='V') n+=5;
            else if (s[i]=='L') n+=50;
            else if (s[i]=='D') n+=500;
            else if (s[i]=='M') n+=1000;
        }
        return n;
    }
};
