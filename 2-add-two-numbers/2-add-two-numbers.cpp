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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int tmp = 0;
        ListNode* head = l1;
        bool l1_end = false;
        bool l2_end = false;
        
        while(!l1_end || !l2_end){
            tmp = 0;
            
            if(carry == 1){
                tmp = l1->val + l2-> val + 1;
                carry = 0;
            }else{
                tmp = l1->val + l2-> val;
            }
            
            if(tmp >= 10){
                l1->val = tmp - 10;
                carry = 1;
            }else{
                l1->val = tmp;
                carry = 0;
            }
            
            
            if(l1->next == NULL)l1_end = true;
            if(l2->next == NULL)l2_end = true;
            
            if(l1_end == true && l2_end == false){
                l1->next = new ListNode({0, NULL});
                l1 = l1->next;
                l2 = l2->next;
            }else if(l1_end == false && l2_end == true){
                l1 = l1->next;
                l2->next = new ListNode({0, NULL});
                l2 = l2->next;
            }else if(l1_end && l2_end && carry == 1){
                l1->next = new ListNode({1, NULL});
            }else{
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        
        return head;
    }
};