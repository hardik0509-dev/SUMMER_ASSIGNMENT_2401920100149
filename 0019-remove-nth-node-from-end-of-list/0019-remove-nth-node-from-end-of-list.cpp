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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fs=head;
         ListNode *sl=head;
         for(int i=0;i<n;i++) fs=fs->next;
         if(fs==NULL) return head->next;
         while(fs->next!=NULL){
            fs=fs->next;
            sl=sl->next;

         }
         ListNode *del=sl->next;
         sl->next=sl->next->next;
        delete del;
         return head;

        
    }
};