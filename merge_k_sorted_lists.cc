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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        if (lists.size() == 0) return nullptr;
        int n = lists.size();
        while(n >1)
        {
            int k = (n+1)/2;
            for(int i = 0; i < n/2; i++)
                lists[i] = mergetwo(lists[i], lists[i + k]);
            n = k;
        }
        
        return lists[0];
    }
    inline ListNode *mergetwo(ListNode *l1, ListNode *l2)
    {
        ListNode dummy(-1);
        ListNode* iter = &dummy;
        for(;l1 != nullptr && l2 != nullptr;iter=iter->next)
        {
            if (l1->val > l2->val) 
            {
                iter->next = l2;
                l2=l2->next;
            }
            else
            {
                iter->next = l1;
                l1=l1->next;
            }
        }
        iter->next = l1 == nullptr? l2:l1;
        return dummy.next;
    }
};
