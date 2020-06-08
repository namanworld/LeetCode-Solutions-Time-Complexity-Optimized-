Basic Approach:
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        map<int,int> freq;
        ListNode* temp = head;
        while(head){
            freq[head->val]++;
            head = head->next;
        }
        ListNode* newHead = NULL;
        ListNode* curr = NULL;
        while(temp){
            if(freq[temp->val]==1){
                if(newHead==NULL){
                    newHead = temp;
                    curr = temp;
                }
                else{
                    curr->next = temp;
                    curr = temp;
                }
            }
            temp = temp->next;
        }
        if(curr) curr->next = NULL;
        return newHead;
    }
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !(head->next)) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* newHead = NULL;
        while(head){
            if(!prev && head){
                if(head->next && head->next->val!=head->val){
                    newHead = head;
                    curr = head;
                }
            }
            if(prev && head){
                if(!head->next){
                    if(prev->val!=head->val) {
                        if(!newHead) {
                            newHead = head;
                            curr = head;
                        }
                        else{
                            curr->next = head;
                            curr = head;
                        }
                    }
                }
                else{
                    if(prev->val!=head->val && head->val!=head->next->val){
                        if(!newHead) {
                            newHead = head;
                            curr = head;
                        }
                        else{
                            curr->next = head;
                            curr = head;
                        }
                    } 
                }
            }
            prev = head;
            head = head->next;
        }
        if(curr) curr->next = NULL;
        return newHead;
    }
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* p = head;
        while (p) {
            ListNode* tmp = p;
            while (p && p->next && p->val == p->next->val)
                p = p->next;
            if (p != tmp) {
                if (!pre) head = p->next;
                else pre->next = p->next;
                p = p->next;
            } else {
                pre = p;
                p = p->next;
            }
        }
        return head;
    }
};
