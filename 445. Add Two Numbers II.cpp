class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s, t;
        while(l1){
            s.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            t.push(l2->val);
            l2 = l2->next;
        }
        int carry = 0;
        ListNode* newHead = NULL;
        while(s.size()>0 && t.size()>0){
            int rem = (s.top()+t.top()+carry)%10;
            if(s.top()+t.top()+carry >= 10){  
                carry = 1;
            }
            else carry = 0;
            ListNode* curr = new ListNode(rem);
            curr->next = newHead;
            newHead = curr;
            s.pop(), t.pop();
        }
        while(s.size()>0){
            int rem = (s.top()+carry)%10;
            if(s.top()+carry>=10) carry = 1;
            else carry = 0;
            ListNode* curr = new ListNode(rem);
            curr->next = newHead;
            newHead = curr;
            s.pop();
        }
        while(t.size()>0){
            int rem = (t.top()+carry)%10;
            if(t.top()+carry>=10) carry = 1;
            else carry = 0;
            ListNode* curr = new ListNode(rem);
            curr->next = newHead;
            newHead = curr;
            t.pop();
        }
        if(carry == 1){
            ListNode* curr = new ListNode(1);
            curr->next = newHead;
            newHead = curr;
        }
        return newHead;
    }
};
