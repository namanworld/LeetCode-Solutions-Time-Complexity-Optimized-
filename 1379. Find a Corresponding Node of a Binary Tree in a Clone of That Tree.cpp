class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) return NULL;
        queue<TreeNode*> q,t;
        
        q.push(original);
        t.push(cloned);
        
        while(!q.empty()){
            TreeNode* temp1 = q.front();
            TreeNode* temp2 = t.front();
            q.pop(); t.pop();
            if(temp1 == target) return temp2;
            if(temp1->left) q.push(temp1->left);
            if(temp1->right) q.push(temp1->right);
            if(temp2->left) t.push(temp2->left);
            if(temp2->right) t.push(temp2->right);
        }
        return NULL;
    }
};
