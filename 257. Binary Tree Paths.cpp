class Solution {
public:
    #include <bits/stdc++.h>
    
    void path(TreeNode* root, string str,  vector<string> &v){
        if(root){
            if(root->left==NULL&&root->right==NULL)
            {
                string temp="";
                temp+=to_string(root->val);
                str+=temp;
                v.push_back(str);
            }
            else
            {
                string temp="";
                temp+=to_string(root->val);
                    temp+="->";
                str+=temp;
                path(root->left,str, v);
                path(root->right,str, v);
            }
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        vector<string> res;
        path(root, "", res);
        return res;
    }
};

APPROACH 2

class Solution {
public:
    #include <bits/stdc++.h>
    
    void path(TreeNode* root, string res,  vector<string> &s){
        if(!root){
            return;
        }
        if(res.size()>0) res+="->"+to_string(root->val);
        if(res.size()==0) res+=to_string(root->val);
        if(!root->left && !root->right) {
            s.push_back(res);
            return;
        }
        
        path(root->left, res, s);
        path(root->right, res, s);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        vector<string> res;
        path(root, "", res);
        return res;
    }
};
