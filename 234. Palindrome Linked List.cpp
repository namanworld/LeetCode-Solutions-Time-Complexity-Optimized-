class Solution {
public:
    bool isPal(vector<int> &v){
        int l=0, r=v.size()-1;
        while(l<r){
            if(v[l++]!=v[r--]) return false;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || head->next==NULL) return true;
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        
        return isPal(v);
    }
};
