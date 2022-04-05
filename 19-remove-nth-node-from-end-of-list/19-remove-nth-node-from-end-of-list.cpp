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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)return NULL;
        vector<ListNode*> node;
        ListNode* h = head;
        
        while(h != NULL){
            node.push_back(h);
            h = h->next;
        }
        
        int count = node.size();
        
        if(count-n == 0){
            head = node[1];
        }else{
            node[count-n-1]->next = node[count-n-1]->next->next;
        }
        return head;
    }
};