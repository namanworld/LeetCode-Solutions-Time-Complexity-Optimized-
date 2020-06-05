BETTER:
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !(head->next)) return false;
        ListNode* slow = head, *fast = head->next;
        while(slow!=fast){
            if(!fast || !(fast->next)) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};

WORST SOL:
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*, bool> visited;
        ListNode* temp = head;
        while(temp){
            if(visited.count(temp)>0) return true;
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};
