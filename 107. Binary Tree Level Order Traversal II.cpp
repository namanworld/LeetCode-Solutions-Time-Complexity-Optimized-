class Solution {
public:
    #include<bits/stdc++.h>
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > final;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()!=0){
            int size = q.size();
            vector<int> curr;
            while(size--){
                TreeNode *top = q.front();
                q.pop();
                if(!top) return final;
                curr.push_back(top->val);
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            final.insert(final.begin(),curr);
        }
        return final;
    }
};
