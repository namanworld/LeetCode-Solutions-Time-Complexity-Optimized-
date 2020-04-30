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
