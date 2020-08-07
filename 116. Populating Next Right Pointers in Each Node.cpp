class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            Node* prev = NULL;
            while(sz--){
                Node* curr = q.front();
                q.pop();
                curr->next = NULL;
                if(prev) prev->next = curr;
                prev = curr;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        
        return root;
    }
};
