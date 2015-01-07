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
    ListNode *swapPairs(ListNode *head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* cur = head;
        while(cur && cur->next)
        {
            ListNode *tmp = cur->next;
            cur->next = tmp->next;
            tmp->next = cur;
            prev->next = tmp;
            prev = prev->next->next;
            cur = cur->next;
        }
        return dummy->next;
    }
};
