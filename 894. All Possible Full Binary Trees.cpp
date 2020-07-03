map<int, vector<TreeNode*> > mp;
    
    vector<TreeNode*> allPossibleFBT(int N) {
        if(mp.count(N)==0){
            vector<TreeNode*> v;
            if(N==1) v.push_back(new TreeNode(0));
            else if(N%2==1){
                for(int x = 0; x<N; ++x){
                    int y = N-1-x;
                    for(TreeNode* left: allPossibleFBT(x)){
                        for (TreeNode* right: allPossibleFBT(y)) {
                            TreeNode* bns = new TreeNode(0);
                            bns->left = left;
                            bns->right = right;
                            v.push_back(bns);
                        }
                    }
                }
            }
            mp[N] = v;
        }   
        return mp[N];
    }
};
