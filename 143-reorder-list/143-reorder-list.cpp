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
    void reorderList(ListNode* head) {
        if((!head) || (!head->next) || (!head->next->next)) return;
        
        stack<ListNode*> s;
        ListNode* tmpHead = head;
        int n = 0;
        while(tmpHead != NULL){
            s.push(tmpHead);
            tmpHead = tmpHead->next;
            n++;
        }
        
        ListNode* tmphead = head;
        for(int i=0; i<n/2; i++){
            ListNode* tmp = s.top();
            s.pop();
            tmp->next = tmphead->next;
            tmphead->next = tmp;
            tmphead = tmphead->next->next;
        }
        
        tmphead->next = nullptr;
    }
};