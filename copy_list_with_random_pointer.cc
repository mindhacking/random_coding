/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        //RandomListNode* cur = head;
        //while(cur){
        for(RandomListNode* cur = head;cur!=nullptr;)
            RandomListNode* tmp = new RandomListNode(cur->label);
            tmp->next = cur->next;
            cur->next = tmp;
            cur= cur->next->next;
        }
        //cur = head;
        //while(cur) {
        for(RandomListNode* cur = head;cur!=nullptr;){
            if (cur->random != nullptr)
                cur->next->random = cur->random->next;
            cur = cur->next->next;
        }
        RandomListNode dummy(-1);
        RandomListNode* ret = &dummy;
        cur = head; 
        while(cur)
        {
            ret->next = cur->next;
            cur->next = cur->next->next;
            cur = cur->next;
            ret = ret->next;
        }
        return dummy.next;
    }
};
