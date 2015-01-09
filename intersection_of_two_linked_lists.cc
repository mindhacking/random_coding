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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB=0;
        ListNode* iterA=headA;
        ListNode* iterB=headB;
        while(iterA!=nullptr) {iterA=iterA->next;lenA++;}
        while(iterB!=nullptr) {iterB=iterB->next;lenB++;}
        if(lenA > lenB) for(int i=0;i<lenA-lenB;i++) headA=headA->next;
        if(lenB > lenA) for(int i=0;i<lenB-lenA;i++) headB=headB->next;
        while(headA!=nullptr)
        {
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};
