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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        vector<int> arr;
        ListNode* curr = head;
        while(curr){
            arr.emplace_back(curr->val);
            curr = curr->next;
        }
        int l = arr.size();
        k = k%l;
        if(k==0) return head;
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin()+k);
        reverse(arr.begin()+k, arr.end());
        curr = head;
        int i=0;
        while(curr){
            curr->val = arr[i++];
            curr = curr->next;
        }
        return head;
    }
};
