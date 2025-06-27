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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)
        return head;
        else{
        ListNode* curr=head;
        ListNode* temp=head->next;
        curr->next=NULL;
        while(temp!=NULL){
            ListNode* nextNode = temp->next;
            temp->next=curr;
            curr=temp;
            temp=nextNode;
        }
        
        return curr;
        }
    
        
    }
};