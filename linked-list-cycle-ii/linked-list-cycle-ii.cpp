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
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast = head;
        ListNode*slow = head;
        ListNode*lishniy = head;
        if(!head) return NULL;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                while(slow != lishniy){
                    lishniy = lishniy->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};