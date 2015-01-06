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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode dummy(-1);
        ListNode *it = &dummy;
        //ListNode *root;
        //ListNode *it = root;
        int carry = 0;
        while(l1!=nullptr || l2!=nullptr)
        {
            int v1 = l1 == nullptr? 0:l1->val;
            int v2 = l2 == nullptr? 0:l2->val;
            int val = (v1+v2+carry)%10;
            carry = (v1+v2+carry)/10;
            it->next = new ListNode(val);
            //it = new ListNode(val);
            it=it->next;
            l1= l1==nullptr?nullptr:l1->next;
            l2= l2==nullptr?nullptr:l2->next;
        }
        if(carry>0) //it = new ListNode(carry); 
        it->next = new ListNode(carry);
        return //root;
        dummy.next;
    }
};
