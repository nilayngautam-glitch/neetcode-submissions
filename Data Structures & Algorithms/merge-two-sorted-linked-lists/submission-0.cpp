/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head3 = new ListNode(-1,nullptr);
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* t3 = head3;
        
        while(t1!=NULL && t2!=NULL){
            if(t1->val <= t2->val){
                t3->next = t1;
                t3 = t1;
                t1 = t1->next;
            }
            else if(t1->val > t2->val){
                t3->next = t2;
                t3 = t2;
                t2 = t2->next;
            }
        }
        if(t1) t3->next = t1;
        else if(t2) t3->next = t2;
        
        return head3->next;
    }
};
