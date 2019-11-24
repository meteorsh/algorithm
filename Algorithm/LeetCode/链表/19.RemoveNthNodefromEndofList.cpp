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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // create a visual Node whose next is head;
        if(!head -> next) return NULL;
        auto dummy = new ListNode(-1);
        
        dummy -> next = head;
        auto first = dummy, second = dummy;
        
        while(n --) first = first -> next;
    
        // let two points move together
        while(first -> next) {
            first = first -> next;
            second = second -> next;
        }

        second -> next = second -> next -> next;
        
        return dummy -> next; // 真正的头结点
        // 为什么return head;不行，详见数据结构笔记               
    }
};
