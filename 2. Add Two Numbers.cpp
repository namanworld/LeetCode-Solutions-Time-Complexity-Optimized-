class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newHead = new ListNode(0);
        ListNode* p = l1, *q = l2, *curr = newHead;
        int carry = 0;
        while(p || q){
            int x = (p) ? p->val : 0;
            int y = (q) ? q->val : 0;
            int sum = carry+x+y;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            if(p) p = p->next;
            if(q) q = q->next;
        }
        if(carry) curr->next = new ListNode(1);
        return newHead->next;
    }
};
