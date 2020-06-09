#include <bits/stdc++.h>
class Solution {
public:
    #define len length()
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end(),[](const string &a,const string&b){
           if(a.len<b.len or (a.len==b.len and a>b))
               return true;
            return false;
        });
        set<string> tmp;
        tmp.insert("");
        string ans="";
        for(int i=0;i<words.size();i++){
            if(tmp.find(words[i].substr(0,words[i].len-1))!=tmp.end()){
                tmp.insert(words[i]);
                ans=words[i];
            }
        }
        return ans;        
    }
};


TRIE IMPLEMENTATION:
class TrieNode{
    public:
    char data;
    unordered_map<char, TrieNode*> children;
    bool isTerminal;
    
    TrieNode(char data){
        this->data = data;
        isTerminal = false;
    }
};

class Trie{
    private:
    TrieNode* root;
    
    public:
    Trie(){
        root = new TrieNode('\0');
    }
    
    void insert(string word){
        TrieNode* temp = root;
        
        for(char ch : word){
            if(temp->children.find(ch) == temp->children.end()){
                temp->children[ch] = new TrieNode(ch);
            }
            temp = temp->children[ch];
        }
        
        temp->isTerminal = true;
    }
    
    bool isOrdered(string word){
        TrieNode* temp = root;
        
        for(char ch : word){
            if(temp == root || temp->isTerminal){
                temp = temp->children[ch];
                continue;
            }
            return false;
        }
        
        return true;
    }
};

class Solution {
public:
    string longestWord(vector<string>& words) {
        Trie* search = new Trie();
        string curr ("");
        int size = 0;
        
        for(string str : words){
            search->insert(str);
        }
        
        for(string str : words){
            if(search->isOrdered(str) && size <= str.size()){
                curr = (size == str.size()) ? min(curr, str) : str;
                size = str.size();
            }
        }
        
        return curr;
    }
};
