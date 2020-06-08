Basic Approach : 
class Solution {
public:
    TreeNode* tree(vector<int> v, int l, int r){
        if(l>r) return NULL;
        int mid = l+(r-l)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = tree(v,l, mid-1);
        root->right = tree(v, mid+1, r);
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        int l = 0, r = v.size()-1;
        return tree(v, l, r);
    }
};

Better:
class Solution {
public:
    ListNode* middle(ListNode* head){
        ListNode* slow = head, *fast = head, *prev = NULL;
        while(fast && (fast->next)){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev) prev->next = NULL;
        return slow;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        ListNode* mid = this->middle(head);
        TreeNode* root = new TreeNode(mid->val);
        
        if(head==mid) return root;
        
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(mid->next);
        return root;
    }
};
