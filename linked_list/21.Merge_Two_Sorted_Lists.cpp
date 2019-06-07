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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0); 
        ListNode *head = &dummy;          //ListNode *head = new ListNode(0);
        ListNode *merged = head;
        while(l1 != NULL && l2 != NULL) {
            
            if (l1->val < l2->val) {
                merged->next = l1;
                l1 = l1->next;
            }
            else {
                merged->next = l2;
                l2 = l2->next;
            }
            merged = merged->next;
        }
        if (l1 != NULL) merged->next = l1;
        else merged->next = l2;
        return head->next;
    }
};