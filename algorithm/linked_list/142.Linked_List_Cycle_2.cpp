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
        ListNode *pt1, *pt2;
        if (head == NULL) return NULL;
        pt1 = head;
        pt2 = head;
        while (pt2->next != NULL && pt2->next->next != NULL) {
            pt1 = pt1->next;
            pt2 = pt2->next->next;
            if (pt1 == pt2) {
                pt1 = head;
                while(pt1 != pt2) {
                    pt1 = pt1->next;
                    pt2 = pt2->next;
                }
                return pt1;
            }
        }
        return NULL;
    }
};