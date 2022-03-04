/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*Time : O(n+m); MEMORY: O(1)
  Algo: calculate length of lists
  then make them same length, then find first element when lists are equal
*/
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        int lenA = 0, lenB = 0;
        
        if (p1 == NULL || p2 == NULL) return NULL;
        
        while(p1 != NULL){
            lenA++;
            p1 = p1->next;
        }
        p1 = headA;
        
        while(p2 != NULL){
            lenB++;
            p2 = p2->next;
        }
        p2 = headB;
        
        while(lenA > lenB){
            p1 = p1->next;
            lenA--;
        }
        while(lenB > lenA){
            p2 = p2->next;
            lenB--;
        }
        
        while (p1 != NULL && p2 != NULL && p1 != p2) {
        p1 = p1->next;
        p2 = p2->next;
        }
        return p1;
    }
};
