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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode();
        ListNode* dummyHead = dummy;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        int place = 1;
        int temp1Total = 0;
        int temp2Total = 0;
        while(temp1 || temp2)
        {
            if(temp1)
            {
                temp1Total += temp1->val * place;
                temp1 = temp1->next;
            }

            if(temp2)
            {
                temp2Total += temp2->val * place;
                temp2 = temp2->next;
            }

            place *= 10;
        }

        int allTotal = temp1Total + temp2Total;
        int mod = 10;

        int stopper = place > allTotal ? place : place * 10;

        while(mod <= stopper)
        {
            dummy->next = new ListNode(((allTotal % mod) / (mod / 10)));
            dummy = dummy->next;
            mod *= 10;   
        }

        

        
        return dummyHead->next;  
    }
};
