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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        
        int interval = 1;
        int n = lists.size();
        while(interval < n){
            for(int i=0; i<n-interval; i+=interval*2){
                merger(lists, i, i+interval);
            }
            interval*=2;
        }
        
        return lists[0];
    }
    
    void merger(vector<ListNode*> &lists, int index1, int index2){
        ListNode* ans = new ListNode(-1);
        ListNode* ptr = ans;
        
        ListNode* l1 = lists[index1];
        ListNode* l2 = lists[index2];
        
        while(l1 || l2){
            if(!l1) {
                ptr->next = l2;
                break;
            }
            if(!l2){
                ptr->next = l1;
                break;
            }
            if(l1->val < l2->val) {
                ptr->next = l1;
                l1 = l1->next;
            }
            else {
                ptr->next = l2;
                l2 = l2->next;
            }
            ptr = ptr->next;
        }
        
        lists[index1] = ans->next;
    }
};
