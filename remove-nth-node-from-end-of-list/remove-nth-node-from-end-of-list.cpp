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
        ListNode*fast = head;
        ListNode*slow = head;
        int i = 0;
        /*slow on 1-nd node fast on n+1 node*/
        while(i < n){ 
            fast = fast->next;
            i++;
        }
        /*if n+1 node is empty return*/
        if(!fast) return head->next;
        while(fast->next){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};