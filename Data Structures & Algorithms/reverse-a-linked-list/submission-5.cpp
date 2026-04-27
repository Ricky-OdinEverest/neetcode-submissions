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
    if(!head) return nullptr;
    ListNode* temp = nullptr;
    ListNode* L = head;
    ListNode* R = head;
    while(L != nullptr)
    {
        R = R->next;
        L->next = temp;
        temp = L;
        L = R;
    }
    return temp;
    }
};
