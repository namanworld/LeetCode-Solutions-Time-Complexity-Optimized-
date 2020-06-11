class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int currAns = 0;
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            int size = q.size();
            currAns = q.front()->val;
            while(size--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return currAns;
    }
};
