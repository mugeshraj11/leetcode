/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* a=head;
    struct ListNode* b=head;
    while(a->next!=NULL){
        a=a->next;
        if(a->next!=NULL)
        a=a->next;
        b=b->next;
    }
    return b;
}
