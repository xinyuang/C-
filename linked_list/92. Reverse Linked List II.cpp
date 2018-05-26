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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *p = dummy;
        for(int i = 0; i < m - 1; i++) {
            p = p->next;
        }
        ListNode *tail = p->next;
        for(int i = m; i < n; i++) {
            ListNode *sub_head = p->next;
            ListNode *tmp = tail->next;
            tail->next = tmp->next;
            p->next = tmp;
            tmp->next = sub_head;
        }
        return dummy->next;
    }
};