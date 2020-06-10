class Solution {
public:
    int depth(TreeNode *root){
        if(!root) return 0;
        return 1 + max(depth(root->left), depth(root->right));
    }
    
    int sumAtLevD(TreeNode *root, int d){
        if(!root) return 0;
        if(d==1) return root->val;
        return sumAtLevD(root->left, d-1) + sumAtLevD(root->right, d-1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int d = depth(root);
        if(d==0) return 0;
        return sumAtLevD(root, d);
    }
};

queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int sum = 0;
        
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp == NULL)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                    sum = 0;
                }
            }
            else
            {
                sum += temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        return sum;
