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
        ListNode* temp = head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        cout<<cnt;
        int m=0;
        if(cnt==n){
            ListNode* node=head;
            head=head->next;
            delete(node);
            return head;
        }
        ListNode* temp1=head;
        while(m!=cnt-n-1){
            temp1=temp1->next;
            m++;
        }
        temp1->next=temp1->next->next;
        return head;
    }
};