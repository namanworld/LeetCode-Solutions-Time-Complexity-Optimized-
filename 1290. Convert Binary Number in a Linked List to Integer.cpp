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
    #include <bits/stdc++.h>
    int getDecimalValue(ListNode* head) {
        string bin = "";
        while(head){
            bin+=to_string(head->val);
            head = head->next;
        }
        
        int num = 0, base = 1;
        
        for(int i=bin.size()-1;i>=0; i--){
            if(bin[i]=='1') num+=base;
            base*=2;
        }
        return num;
    }
};
