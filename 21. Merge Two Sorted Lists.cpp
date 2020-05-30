/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newHead = NULL, *curr = NULL;
        
        if(!l1) return l2;
        if(!l2) return l1;
        
        if(l1->val<l2->val){
            newHead = l1;
            curr = newHead;
            l1 = l1->next;
            curr->next = NULL;
        }
        else{
            newHead = l2;
            curr = newHead;
            l2 = l2->next;
            curr->next = NULL;
        }
        
        while(l1 && l2){
            if(l1->val<l2->val){
                curr->next = l1;
                curr = curr->next;
                l1 = l1->next;
                curr->next = NULL;
            }
            else{
                curr->next = l2;
                curr = curr->next;
                l2 = l2->next;
                curr->next = NULL;
            }
        }
        
        if(l1) curr->next = l1;
        if(l2) curr->next = l2;
        
        return newHead;
    }
};
