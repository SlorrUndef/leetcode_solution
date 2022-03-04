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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode *del;
        /* if first elements is equal to val */
        while(head != NULL && head->val == val) {
            del = head;
            head = head->next;    
            delete del;
        }
        
        ListNode *tmp = head;

        while(tmp && tmp->next) {
            if(tmp->next->val == val){
                del = tmp->next;
                tmp->next = tmp->next->next;
                delete del;
            } else tmp = tmp->next;
        }
        
        return head;
    }
};