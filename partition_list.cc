/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution { // linked list insertion
public:
    ListNode *partition(ListNode *head, int x) {
        ListNode left_dummy(INT_MIN);
        ListNode right_dummy(INT_MIN);
        
        ListNode* left_cur = &left_dummy;
        ListNode* right_cur = &right_dummy;
        
        ListNode* iter = head;
        while(iter!=nullptr)
        {
            if(iter->val < x)
            {
                left_cur->next = iter;
                left_cur = iter;
            }
            else
            {
                right_cur->next = iter;
                right_cur = iter;
            }
            iter = iter->next;
        }
        left_cur->next = right_dummy.next;
        right_cur->next = nullptr;
        return left_dummy.next;
    }
};
