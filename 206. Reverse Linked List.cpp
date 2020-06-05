class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||!(head->next)) return head;
        ListNode* rev = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rev;
    }
};
