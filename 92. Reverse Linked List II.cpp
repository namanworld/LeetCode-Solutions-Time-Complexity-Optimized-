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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int t = 1;
        ListNode* temp = head;
        while(temp && m!=1 && t++!=m-1) temp = temp->next;
        ListNode*prev = NULL, *curr = temp->next, *end = temp->next;
        if(m==1) {
            curr = temp;
            end = temp;
            while(curr){
                ListNode* x = curr->next;
                curr->next = prev;
                prev = curr;
                curr = x;
                if(++t==n+1){
                    temp->next = curr;
                    return prev;
                }
            }
        }
        while(curr){
            ListNode* x = curr->next;
            curr->next = prev;
            prev = curr;
            curr = x;
            if(t++==n){
                end->next = x;
                break;
            }
        }
        temp->next = prev;
        return head;
        
    }
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head) return head;
        ListNode* curr = head, *prev = NULL;
        while(m>1){
            prev = curr;
            curr = curr->next;
            m--, n--;
        }
        ListNode* con = prev, *tail = curr, *third = NULL;
        while(n>0){
            third = curr->next;
            curr->next = prev;
            prev = curr;
            curr = third;
            n--;
        }
        if(con) con->next = prev;
        else head = prev;
        
        tail->next = curr;
        return head;
    }
};
