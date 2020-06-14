class BrowserHistory {
private:
    string *res;
    int curr = -1;
    int top = 0;
public:
    #include <bits/stdc++.h>
    BrowserHistory(string homepage) {
        res = new string[101];
        curr++;
        res[curr] = homepage;
        top++;
    }
    
    void visit(string url) {
        curr++;
        res[curr] = url;
        top = curr + 1;
    }
    
    string back(int steps) {
        if(curr<=steps) curr = 0;
        else curr = curr - steps;
        return res[curr];
    }
    
    string forward(int steps) {
        if(curr+steps+1>=top) curr = top-1;
        else curr+=steps;
        return res[curr];
    }
};
