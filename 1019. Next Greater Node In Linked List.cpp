
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head, *prev = NULL;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        if(!head) return {};
        head = reverse(head);
        stack<int> s;
        vector<int> res;
        ListNode* temp = head;
        while(temp){
            if(s.size()==0) res.push_back(0);
            else if(s.size()>0 && s.top()>temp->val) res.push_back(s.top());
            else if(s.size()>0 && s.top()<=temp->val){
                while(s.size()>0 && s.top()<=temp->val) s.pop();
                if(s.size()==0) res.push_back(0);
                else res.push_back(s.top());
            }
            s.push(temp->val);
            temp = temp->next;
        }
        std::reverse(res.begin(), res.end());
        return res;
    }
};
