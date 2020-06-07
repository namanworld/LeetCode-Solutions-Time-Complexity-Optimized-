class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        if(!head) return 0;
        map<int, bool> seen;
        for(auto &x:G) seen[x] = true;
        
        int count = 0;
        bool found = false;
        while(head){
            if(seen.count(head->val)>0) {
                if(!found) count++;
                found = true;
            }
            else if(seen.count(head->val)==0 && found==true){
                found = false;
            }
            head = head->next;
        }
        return count;
    }
};

APPROACH 2:
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& G) {
        if(!head) return 0;
        set<int> s;
        for(int x:G) s.insert(x);
        
        ListNode* curr = head;
        int ans = 0;
        while(curr){
            if(s.find(curr->val)!=s.end() && (curr->next==NULL || s.find(curr->next->val)==s.end())) ans++;
            curr = curr->next;
        }
        return ans;
    }
};
