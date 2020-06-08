class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !(head->next)) return head;
        ListNode* rec = head->next->next;
        
        ListNode* curr = head;
        ListNode* n = head->next;
        n->next = curr;
        head->next = swapPairs(rec);
        return n;        
    }
};
