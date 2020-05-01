Runtime: 4 ms, faster than 83.99% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.
Memory Usage: 12.5 MB, less than 100.00% of C++ online submissions for Binary Tree Zigzag Level Order Traversal.

class Solution {
public:
    #include<bits/stdc++.h>
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> final;
        queue<TreeNode*> q;
        q.push(root);
        int lev = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            while(size--){
                TreeNode *top = q.front();
                q.pop();
                if(!top) return final;
                temp.push_back(top->val);
                if(top->left) q.push(top->left);
                if(top->right) q.push(top->right);
            }
            if(lev%2!=0) reverse(temp.begin(), temp.end());
            final.push_back(temp);
            lev++;
        }
        return final;
    }
};
