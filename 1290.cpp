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
class Solution 
{

    public:
    
    int a = 0;
    
    int getDecimalValue(ListNode* head)
    {
         return head ? getDecimalValue(head -> next) + (head -> val << a++) : 0;
    }
};
