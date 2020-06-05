class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA, *pB = headB;
        while(pA!=pB){
            pA = pA != NULL ? pA->next : headB;
            pB = pB != NULL ? pB->next : headA;
        }
        return (pA == pB && pA != NULL) ? pA : NULL;
    }
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, bool> seen;
        
        while(headA){
            seen[headA] = true;
            headA = headA->next;
        }
        
        while(headB){
            if(seen.count(headB)>0) return headB;
            headB = headB->next;
        }
        return NULL;
    }
};
