class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        ListNode* curr = root;
        int N=0;
        while(curr){
            curr = curr->next;
            N++;
        }
        int width = N/k, rem = N%k;
        vector<ListNode*> v;
        curr = root;
        for(int i=0;i<k; i++){
            ListNode* head = curr;
            for(int j=0; j<width+(i<rem?1:0)-1; ++j){
                if(curr) curr = curr->next;
            }
            if(curr){
                ListNode* prev = curr;
                curr = curr->next;
                prev->next = NULL;
            }
            v.push_back(head);
        }
        return v;
    }
};
