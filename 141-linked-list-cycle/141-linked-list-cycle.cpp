/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // O(N)
    bool hasCycle(ListNode *head) {
        
        if(head != NULL && head->next != NULL && head->next->next){
            ListNode *first = head->next->next;
            ListNode *second = head;
            while(first != NULL  && first->next != NULL ){
                if(first == second){
                    return true;
                }
                first = first->next->next;
                second = second->next;
            }
        }else{
            return false;
        }
        
        return false;
    }
};