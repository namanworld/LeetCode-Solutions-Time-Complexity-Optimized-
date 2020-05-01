class Solution {
public:
    #include<bits/stdc++.h>
    int maxCount = 0;
    void inorder(TreeNode* root, unordered_map<int, int> &map){
        if(!root) return;
        inorder(root->left, map);
        map[root->val]++;
        if(map[root->val]>maxCount) maxCount = map[root->val];
        inorder(root->right, map);
    }
    
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> map;
        inorder(root,map);
        
        vector<int> ans;
        for(auto it=map.begin(); it!=map.end(); it++){
            if(it->second == maxCount) ans.push_back(it->first);
        }
        return ans;        
    }
};
