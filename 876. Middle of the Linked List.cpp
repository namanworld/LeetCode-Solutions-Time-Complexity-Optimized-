class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head||!(head->next)) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast){
            slow = slow->next;
            if(fast->next==NULL) break;
            else fast = fast->next->next;
        }
        return slow;
    }
};
