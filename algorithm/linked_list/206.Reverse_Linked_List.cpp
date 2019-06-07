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
    ListNode* reverseList(ListNode* head) {
        ListNode *rev = NULL;
        while (head != NULL) {
            ListNode *tmp = head->next;
            head->next = rev;
            rev = head;
            head = tmp;
        }
        return rev;
    }
};