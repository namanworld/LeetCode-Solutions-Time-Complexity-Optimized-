class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> v;
        queue<Node*> q;
        q.push(root);
        vector<int> res;
        while(q.size()){
            int size = q.size();
            while(size--){
                Node* curr = q.front();
                q.pop();
                res.push_back(curr->val);
                for(int i=0; i<curr->children.size(); i++)  q.push(curr->children[i]);
            }
            v.push_back(res);
            res.clear();
        }
        return v;
    }
};

vector<vector<int>> res;
	if (root == nullptr) return res;

	queue<Node*> q;
	q.push(root);

	while (!q.empty()) {

		int sizeVal = q.size();
		res.push_back(vector<int>());

		for (int i = 0; i < sizeVal; ++i) {

			Node* tmp = q.front();
			q.pop();

			res.back().push_back(tmp->val);

			for (int i = 0; i < tmp->children.size(); ++i) q.push(tmp->children[i]);

		}

	}

	return res;
