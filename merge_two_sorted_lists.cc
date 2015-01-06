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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        ListNode dummy(-1);
        ListNode *p = &dummy;
        while(l1!=nullptr&& l2!=nullptr)
        {
            if(l1->val>l2->val)
            {
                p->next = l2;
                l2=l2->next;
            }
            else
            {
                p->next = l1;
                l1=l1->next;
            }
            p=p->next;
        }
        p->next = l1==nullptr?l2:l1;
        return dummy.next;
    }
};
