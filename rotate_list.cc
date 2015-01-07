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
    ListNode *rotateRight(ListNode *head, int k) {
        if (head == nullptr || k == 0) return head;
        int len = 1;
        ListNode* iter = head;
        while(iter->next!=nullptr)
        {
            iter=iter->next;
            len++;
        }
        k = len - k % len;
        iter->next=head;
        while(k--!=0)
        {
            iter=iter->next;
        }
        head = iter->next;
        iter->next = nullptr;
        return head;
    }
};
