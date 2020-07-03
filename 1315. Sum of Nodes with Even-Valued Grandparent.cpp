class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        int ans = 0;
        map<TreeNode*, TreeNode*> mp;
        
        queue<TreeNode*> q;
        q.push(root);
        mp[root] = NULL;
        while(!q.empty()){
            TreeNode* top = q.front();
            q.pop();
            if(mp.count(mp[top])>0 && mp[mp[top]] && mp[mp[top]]->val%2==0) ans+=top->val;
            
            if(top->left){
                mp[top->left] = top;
                q.push(top->left);
            }
            
            if(top->right){
                mp[top->right] = top;
                q.push(top->right);
            }
        }
        return ans;
    }
};
