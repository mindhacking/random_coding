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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr) return nullptr;
        ListNode* iter = head->next;
        ListNode* prev = head;
        while(iter!=nullptr)
        {
            if (iter->val == prev->val)
            {
                prev->next = iter->next;
                delete(iter);
            }
            else prev = iter;
            
            iter = iter->next;
        }
        return head;
    }
};
