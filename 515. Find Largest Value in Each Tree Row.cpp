class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* temp = NULL;
        while(q.size()){
            int size = q.size();
            int currMax = INT_MIN;
            while(size--){
                temp = q.front();
                q.pop();
                currMax = max(currMax, temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            res.emplace_back(currMax);
        }
        return res;
    }
};
