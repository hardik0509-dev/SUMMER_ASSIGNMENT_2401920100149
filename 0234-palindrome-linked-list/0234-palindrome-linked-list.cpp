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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)return true;
        ListNode *sl=head;
        ListNode *fs=head;
        while(fs!=NULL&&fs->next!=NULL){
            sl=sl->next;
            fs=fs->next->next;
        }
        ListNode *pre=NULL;
        ListNode *curr=sl;
        while(curr){
            ListNode *nextnode=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nextnode;
        }
        ListNode *first=head;
        ListNode *second=pre;
        while(second){
            if(first->val!=second->val)
            return false;
            first=first->next;
            second=second->next;
        }
        return true;

        
    }
};