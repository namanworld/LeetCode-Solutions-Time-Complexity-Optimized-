class Solution {
public:
    int maxStep;
    
    void maxPath(TreeNode* root, bool isLeft, int step){
        if(!root) return;
        maxStep = max(maxStep, step);
        if(isLeft){
            maxPath(root->left, true, 1);
            maxPath(root->right, false, 1 + step);
        }
        else{
            maxPath(root->left, true, 1+step);
            maxPath(root->right, false, 1 );
        }
    }
    
    int longestZigZag(TreeNode* root) {
        maxStep = 0;
        maxPath(root, true, 0);
        maxPath(root, false, 0);
        return maxStep;
    }
};
