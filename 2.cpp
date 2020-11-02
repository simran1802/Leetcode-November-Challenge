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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *res = new ListNode(INT_MIN);
        while(head){
            ListNode *dummy = res;
            while(dummy->next && dummy->next->val < head->val){
                dummy = dummy->next;
            }
            ListNode *next_node = head->next;
            head->next = dummy->next;
            dummy->next = head;
            head = next_node;
            
        }
        return res->next;
    }
};
