Runtime: 32 ms, faster than 89.58% of C++ online submissions for Maximum Depth of N-ary Tree.
Memory Usage: 10.7 MB, less than 100.00% of C++ online submissions for Maximum Depth of N-ary Tree.

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        
        int count = 0;
        
        for(int i=0; i<root->children.size(); i++){
            count = max(count, maxDepth(root->children[i]));
        }
        return 1+count;
    }
};
