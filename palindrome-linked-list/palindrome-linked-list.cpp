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

/*
TIME: O(n); MEMORY: O(1)
ALGO: reverse half of the list (this will leave first (length/2 + 1) elements in the head list)
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* n;
        while(cur!=NULL){
            n=cur->next;
            cur->next=prev;
            prev=cur;
            cur=n;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode *headRev = head;
        if(!head->next) return true;
        int len = 0;
        while(headRev != NULL){
            len++;
            headRev = headRev->next;
        }
        len = len/2;
        headRev = head;
        for(int i = 0; i < len; ++i){
            headRev = headRev->next;        
        }
        headRev = reverseList(headRev);
        while(headRev){
            if(head->val != headRev->val) return false;
            head = head->next;
            headRev = headRev->next;
            len--;
        }
        return true;
    }
};