Runtime: 36 ms, faster than 95.63% of C++ online submissions for N-ary Tree Preorder Traversal.
Memory Usage: 11.2 MB, less than 100.00% of C++ online submissions for N-ary Tree Preorder Traversal.

class Solution {
public:
    
    void preorder(Node* root, vector<int> &v){
        if(root==NULL) return;
        
        v.push_back(root->val);
        for(int i=0; i<root->children.size(); i++){
            preorder(root->children[i], v);
        }
        
    }
    
    vector<int> preorder(Node* root) {
        vector<int> v;
        preorder(root, v);
        return v;
    }
};

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        if(!root) return {};
        vector<int> res;
        stack<Node*> s;
        s.push(root);
        while(!s.empty()){
            Node* curr = s.top();
            s.pop();
            if(curr){
                res.push_back(curr->val);
                for(int i=curr->children.size()-1; i>=0; i--)
                    s.push(curr->children[i]);
            }
        }
        return res;
    }
};
