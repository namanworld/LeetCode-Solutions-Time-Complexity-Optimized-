#include <bits/stdc++.h>
class Solution {
public:
    bool isValid(string st) {
        stack<char> s;
        
        for(char c:st){
            if(c=='(' || c=='{' || c=='[') s.push(c);
            else{
                if(s.size()==0) return false;
                if(s.top()=='(' && c==')') s.pop();
                else if(s.top()=='{' && c=='}') s.pop();
                else if(s.top()=='[' && c==']') s.pop();
                else return false;
            }
        }
        
        return s.size()==0;
        
    }
};


#include <bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) {
            return true;
        }
        if (s.size() % 2) {
            return false;
        }
        stack<char> myStack;
        for (char c: s) {
            if (c == '(' || c == '[' || c == '{') {
                myStack.push(c);
            }
            else if (c == ')') {
                if (myStack.empty() || myStack.top() != '(') {
                    return false;
                }
                else {
                    myStack.pop();
                }
            }
            else if (c == ']') {
                if (myStack.empty() || myStack.top() != '[') {
                    return false;
                }
                else {
                    myStack.pop();
                }
            }
            else {
                if (myStack.empty() || myStack.top() != '{') {
                    return false;
                }
                else {
                    myStack.pop();
                }
            }
        }
        return myStack.size()==0;
    }
};
