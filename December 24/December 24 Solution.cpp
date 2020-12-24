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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* front = new ListNode(-1);
        front->next = head;
        ListNode* prev = front;
        
        while(head && head->next)
        {
            prev -> next = head ->next;
            head -> next = head-> next -> next;
            prev -> next -> next = head;
            prev = prev -> next -> next;
            head = head -> next ;
        }
        
        return front -> next ;
    }
};
