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
    ListNode* sortList(ListNode* head) {
        if(!head){return nullptr;}
        if(!head->next){return head;}

        ListNode *start = new ListNode(0, head), *bottom = start, *minn = start, *maxx = start;
        while(maxx!=NULL && maxx->next!=NULL){
            minn=minn->next;
            maxx=maxx->next->next;
        }
        maxx=minn->next;
        minn->next=nullptr;

        head=sortList(head);
        maxx=sortList(maxx);
        while(head || maxx){
            if(!head){
                bottom=bottom->next=maxx;
                maxx=maxx->next;
            }else if(!maxx){
                bottom=bottom->next=head;
                head=head->next;
            }else if(head->val < maxx->val){
                bottom=bottom->next=head;
                head=head->next;
            }else{
                bottom=bottom->next=maxx;
                maxx=maxx->next;
            }
        }

        return start->next; 
    }
};