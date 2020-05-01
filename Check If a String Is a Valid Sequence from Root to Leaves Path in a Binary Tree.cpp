class Solution {
public:
    bool check(TreeNode* node, vector<int>& arr, int idx) {
        if (node == NULL) return false;
        if (node->val != arr[idx]) return false;
        if (idx + 1 == arr.size())
            return node->left == NULL && node->right == NULL;
        return check(node->left, arr, idx+1) || check(node->right, arr, idx+1);
    }

    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        return check(root, arr, 0);
    }
};
