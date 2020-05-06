class Solution {
public:
    bool divisorGame(int N) {
        bool game[1001] = {0};
        game[2] = true;
        for(int i=3; i<=N ; i++){
            for(int j=1;j<i; j++){
                if(i%j==0){
                    if(game[i-j]==false){
                        game[i] = true;
                        break;
                    }
                }
            }
        }
        return game[N];
    }
};


BETTER APPROACH
return N%2==0;
